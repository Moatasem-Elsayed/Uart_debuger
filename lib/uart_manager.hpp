#ifndef UART_DEBUGER_UART_DEBUGER_LIB_UART_MANAGER_HPP
#define UART_DEBUGER_UART_DEBUGER_LIB_UART_MANAGER_HPP

#include <iostream>
#include <memory.h>
#include <string>
#include "file_manager.hpp"
#include "frame.hpp"
#include "logger.hpp"
#include "uart_adapter.hpp"

namespace uart {
namespace debugger {
class UartManager : public UartAdapter {
  private:
    Logger log_file_;
    FileManager file_manager_;

  public:
    UartManager() = default;
    explicit UartManager(const std::string& excel_file, const std::string& analysis_file);
    void log_messages();
    ~UartManager() = default;
};
} // namespace debugger
} // namespace uart

#endif // UART_DEBUGER_UART_DEBUGER_LIB_UART_MANAGER_HPP