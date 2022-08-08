#ifndef UART_DEBUGER_UART_DEBUGER_LIB_UART_ADAPTER_HPP
#define UART_DEBUGER_UART_DEBUGER_LIB_UART_ADAPTER_HPP
#include <iostream>
#include <memory.h>
#include <string>
#include "file_manager.hpp"
#include "frame.hpp"

namespace uart {
namespace debugger {
class UartAdapter {
  private:
    Frame frame_;
    std::string com_;
    uint32_t baudrate_;

  protected:
    UartAdapter() = default;
    explicit UartAdapter(const uint32_t baudrate, const std::string& com);
    Frame AnalysisBuffer(std::string buffer);
    ~UartAdapter() = default;
};
} // namespace debugger
} // namespace uart

#endif // UART_DEBUGER_UART_DEBUGER_LIB_UART_ADAPTER_HPP
