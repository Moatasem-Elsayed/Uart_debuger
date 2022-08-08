#ifndef UART_DEBUGER_UART_DEBUGGER_LIB_FILE_MANAGER_HPP
#define UART_DEBUGER_UART_DEBUGGER_LIB_FILE_MANAGER_HPP
#include <iostream>
#include <ostream>
#include <string>

namespace uart {
namespace debugger {
class FileManager {
  public:
    FileManager() = default;
    explicit FileManager(const std::string& file_name);
    std::string GetData();

  private:
    void InsertFirstRow();
    std::string file_name_;
};
} // namespace debugger
} // namespace uart

#endif // UART_DEBUGER_UART_DEBUGGER_LIB_FILE_MANAGER_HPP