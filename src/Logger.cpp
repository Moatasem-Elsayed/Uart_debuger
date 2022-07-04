#include <iostream>
#include <string>
#include "../lib/Logger.hpp"
#include <ctime>
#include <sstream>
Logger::Logger(std::string filename) : ExcelManger(filename)
{
}
bool Logger::write(LogType type, std::string message)
{
    std::stringstream buffer;
    Excel_open();
    buffer << Clock_now() << "\t";
    switch (type)
    {
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
std::string Logger::Clock_now()
{
    auto time = std::chrono::system_clock::now();
    std::time_t timenow = std::chrono::system_clock::to_time_t(time);
    std::string timestr(std::ctime(&timenow));
    timestr.pop_back();
    return timestr;
}
