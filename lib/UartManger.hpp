#ifndef UARTMANGER
#define UARTMANGER
#include <iostream>
#include <string>
#include "FileManger.hpp"
#include "Frame.hpp"
#include <memory.h>
#include "UartAdapter.hpp"
#include "Logger.hpp"
class UartManger : public UartAdapter
{
private:
    Logger m_logfile;
    FileManger m_filemanger;

public:
    UartManger() = default;
    UartManger(std::string excel_file, std::string anaylsis_file);
    void log_messages();
    ~UartManger() = default;
};
#endif