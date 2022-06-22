#include "ExcelManger.hpp"
#include <fstream>
ExcelManger::ExcelManger(std::string filename) : m_filename(filename)
{
    std::cout << "Excel : " << filename << " start working right now " << std::endl;
    std::ifstream f(m_filename.c_str());
    if (f.good() != true)
    {
        InsertFirstRow();
    }
}
void ExcelManger::InsertFirstRow()
{
    std::cout << "no exist" << std::endl;
    m_excelfile.open(m_filename, std::ios::app);
    Excel_Write("Time\tMessage\tContext\n");
    Excel_close();
}
void ExcelManger::Excel_open()
{
    m_excelfile.open(m_filename, std::ios::app);
}
void ExcelManger::Excel_Write(std::string message)
{
    m_excelfile << message;
    m_excelfile << std::endl;
}
void ExcelManger::Excel_close()
{
    m_excelfile.close();
}
// friend std::ostream &operator<<(std::ostream &out, std::string);
