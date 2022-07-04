#include "ExcelManger.hpp"
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
class Logger : public ExcelManger
{
public:
    Logger() = default;
    Logger(std::string filename);

    typedef enum
    {
        INFO,
        DEBUG,
        ERROR
    } LogType;

    bool write(LogType type, std::string);

private:
    std::string Clock_now();
};