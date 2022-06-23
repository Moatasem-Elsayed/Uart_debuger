#ifndef UARTADAPTER
#define UARTADAPTER
#include <iostream>
#include <string>
#include "FileManger.hpp"
#include "Frame.hpp"
#include <memory.h>

class UartAdapter
{
private:
    Frame m_frame;
    std::string m_com;
    uint32_t m_baudrate;

protected:
    UartAdapter() = default;
    UartAdapter(uint32_t baudrate, std::string com);
    Frame analysisbuffer(std::string buffer);
    ~UartAdapter();
};
#endif
