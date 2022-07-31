#include "../lib/excel_manager.hpp"
#include <fstream>

namespace uart {
namespace debugger {

ExcelManager::ExcelManager(const std::string& file_name)
  : file_name_(file_name) {
    std::cout << "Excel : " << file_name << " start working right now "
              << std::endl;
    std::ifstream f(file_name_.c_str());
    if (!f.good()) {
        InsertFirstRow();
    }
}

void ExcelManager::InsertFirstRow() {
    std::cout << "no exist" << std::endl;
    excel_file_.open(file_name_, std::ios::app);
    Excel_Write("Time\tMessage\tContext\n");
    Excel_close();
}

void ExcelManager::Excel_open() { excel_file_.open(file_name_, std::ios::app); }

void ExcelManager::Excel_Write(const std::string& message) {
    excel_file_ << message;
    excel_file_ << std::endl;
}

void ExcelManager::Excel_close() { excel_file_.close(); }

} // namespace debugger
} // namespace uart
