#ifndef FILEMANGER
#define FILEMANGER
#include <iostream>
#include <string>
#include <ostream>
#include <fstream>
class FileManger
{
public:
    FileManger() = default;
    FileManger(std::string filename);
    std::string getdata();
    // friend std::ostream &operator<<(std::ostream &out, std::string);

private:
    void InsertFirstRow();
    std::string m_filename;
    std::ifstream m_Analysisfile;
};
#endif