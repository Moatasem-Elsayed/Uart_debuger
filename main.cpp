#include <algorithm>
#include <experimental/filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <unistd.h>
#include "lib/uart_manager.hpp"

// Todo: The main function shall take user arguments
/// ./<binary> -<configFilePath> -<analysisFilePath>
int main(/*should be used*/) {
    const std::string log_file_path{ "logs/log_file.csv" };
    const std::string analysis_file_path{ "logs/analysis_file.txt" };
    uart::debugger::UartManager uart_manager(log_file_path, analysis_file_path);

    while (true) {
        uart_manager.log_messages();
    }
    return 0;
}