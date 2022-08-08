#ifndef UART_DEBUGER_UART_DEBUGGER_LIB_FRAME_HPP
#define UART_DEBUGER_UART_DEBUGGER_LIB_FRAME_HPP
#include <array>
#include <iostream>

namespace uart {
namespace debugger {
class Frame {
    std::string graphical_buffer;
    std::array<bool, 8> bits;
    char value;
};

} // namespace debugger
} // namespace uart
#endif // UART_DEBUGER_UART_DEBUGGER_LIB_FRAME_HPP