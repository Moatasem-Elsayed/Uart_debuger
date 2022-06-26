

#include <iostream>
#include <string>
#include <ostream>
#include <fstream>
#include <sstream>
#include "../lib/FileManger.hpp"

FileManger::FileManger(std::string filename) : m_filename(filename)
{
    std::cout << "anaylsis file  : " << filename << " start working right now " << std::endl;
}
std::string FileManger::getdata()
{
    std::stringstream buffer;
    m_Analysisfile.open("/dev/ttyUSB0", std::ios::in);
    buffer << m_Analysisfile.rdbuf();
    m_Analysisfile.close();
    return buffer.str();
}
