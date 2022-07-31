#include "../lib/uart_manager.hpp"

namespace uart {
namespace debugger {

UartManager::UartManager(const std::string& log_file, const std::string& analysis_file)
  : log_file_(log_file),
    file_manager_(analysis_file) {
    std::cout << "create files are done " << std::endl;
}

void UartManager::log_messages() {
    std::string buffers = file_manager_.GetData();
    std::cout << "**** Buffer ****" << std::endl;
    std::cout << buffers;
    std::cout << "****************" << std::endl;

    std::string temp;
    for (auto& c : buffers) {
        if (c != '\n') {
            temp += c;
        } else {
            if (temp != "") {
                log_file_.write(Logger::INFO, temp);
                temp.clear();
            }
        }
    }
    exit(1);
}
} // namespace debugger
} // namespace uart