#ifndef UART_DEBUGER_UART_DEBUGGER_LIB_EXCEL_MANAGER_HPP
#define UART_DEBUGER_UART_DEBUGGER_LIB_EXCEL_MANAGER_HPP

#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

namespace uart {
namespace debugger {

class ExcelManager {
  protected:
    ExcelManager() = default;
    explicit ExcelManager(const std::string& file_name);
    void Excel_open();
    void Excel_Write(const std::string& message);
    void Excel_close();

  private:
    void InsertFirstRow();
    std::string file_name_;
    std::ofstream excel_file_;
};

} // namespace debugger
} // namespace uart
#endif // UART_DEBUGER_UART_DEBUGGER_LIB_EXCEL_MANAGER_HPP