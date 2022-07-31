#include "../lib/uart_adapter.hpp"

namespace uart {
namespace debugger {

UartAdapter::UartAdapter(const uint32_t baudrate, const std::string& com)
  : baudrate_(baudrate),
    com_(com) {
    std::cout << "2nd sprint" << std::endl;
}

Frame UartAdapter::AnalysisBuffer(std::string buffer) {
    return Frame();
}

} // namespace debugger
} // namespace uart
