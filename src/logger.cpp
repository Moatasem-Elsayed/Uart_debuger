#include "../lib/logger.hpp"
#include <ctime>
#include <iostream>
#include <sstream>
#include <string>

namespace uart {
namespace debugger {

Logger::Logger(const std::string& file_name) : ExcelManager(file_name) {
}
bool Logger::write(LogType type, std::string message) {
    std::stringstream buffer;
    Excel_open();
    buffer << ClockNow() << "\t";
    switch (type) {
    case INFO:
        buffer << "INFO";
        break;
    case DEBUG:
        buffer << "DEBUG";

        break;
    case ERROR:
        buffer << "ERROR";
        break;
    default:
        Excel_close();
        return false;
        break;
    }
    buffer << "\t" << message;
    Excel_Write(buffer.str());
    Excel_close();
    return true;
}

std::string Logger::ClockNow() {
    auto time = std::chrono::system_clock::now();
    std::time_t time_now = std::chrono::system_clock::to_time_t(time);
    std::string time_str(std::ctime(&time_now));
    time_str.pop_back();
    return time_str;
}
} // namespace debugger
} // namespace uart