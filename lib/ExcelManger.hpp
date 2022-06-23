#include <iostream>
#include <string>
#include <ostream>
#include <fstream>
class ExcelManger
{
protected:
    ExcelManger() = default;
    ExcelManger(std::string filename);
    void Excel_open();
    void Excel_Write(std::string message);
    void Excel_close();
    // friend std::ostream &operator<<(std::ostream &out, std::string);

private:
    void InsertFirstRow();
    std::string m_filename;
    std::ofstream m_excelfile;
};