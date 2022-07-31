#ifndef UART_DEBUGER_UART_DEBUGER_LIB_LOGGER_HPP
#define UART_DEBUGER_UART_DEBUGER_LIB_LOGGER_HPP

#include <chrono>
#include <iostream>
#include <string>
#include <thread>
#include "excel_manager.hpp"

namespace uart {
namespace debugger {
class Logger : public ExcelManager {
  public:
    Logger() = default;
    Logger(const std::string& file_name);

    typedef enum {
        INFO,
        DEBUG,
        ERROR
    } LogType;

    bool write(LogType type, std::string);

  private:
    std::string ClockNow();
};
} // namespace debugger
} // namespace uart

#endif // UART_DEBUGER_UART_DEBUGER_LIB_LOGGER_HPP