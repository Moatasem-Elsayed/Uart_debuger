#include <algorithm>
#include <experimental/filesystem>
#include <fstream>
#include <getopt.h>
#include <iostream>
#include <map>
#include <string>
#include <unistd.h>
#include "lib/uart_manager.hpp"

void PrintHelp() {
    std::cout << "\n\n"
                 "-l\n--LogFilePath       (Mandatory) Path to log file '.CSV file' \n\n"
                 "-a\n--AnalysisFilePath  (Mandatory) Path to the Analysis file '.txt file' \n\n"
                 "-h\n--help:              Show help\n\n";
}

std::map<std::string, std::string> GetArgs(int argc, char** argv) {
    // could use std::pair .. but the map would help with future extendions
    std::map<std::string, std::string> argument_map;

    const char* const short_opts = "l:a:h";
    const option long_opts[] = {
        { "LogFilePath", required_argument, nullptr, 'l' },
        { "AnalysisFilePath", required_argument, nullptr, 'a' },
        { "help", no_argument, nullptr, 'h' },
        { nullptr, no_argument, nullptr, 0 }
    };

    while (true) {
        const auto opt = getopt_long(argc, argv, short_opts, long_opts, nullptr);
        if (-1 == opt)
            break;
        switch (opt) {
        case 'l':
            argument_map["LogFilePath"] = std::string(optarg);
            break;
        case 'a':
            argument_map["AnalysisFilePath"] = std::string(optarg);
            break;
        case 'h': // -h or --help
        default:
            break;
        }
    }
    return argument_map;
}

int main(int argc, char** argv) {
    std::map<std::string, std::string> args = GetArgs(argc, argv);
    if (!args.empty() && !args["LogFilePath"].empty() && !args["AnalysisFilePath"].empty()) {
        uart::debugger::UartManager uart_manager(args["LogFilePath"], args["AnalysisFilePath"]);

        while (true) {
            uart_manager.log_messages();
        }
    } else {
        // Exiting the program after printing the help menu.
        PrintHelp();
    }

    return 0;
}
