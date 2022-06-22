#include "UartManger.hpp"
UartManger::UartManger(std::string logfile, std::string anaylsis_file) : m_logfile(logfile), m_filemanger(anaylsis_file)
{
    std::cout << "create files are done " << std::endl;
}
void UartManger::log_messages()
{
    std::string buffers = m_filemanger.getdata();
    std::cout << "**** Buffer ****" << std::endl;
    std::cout << buffers;
    std::cout << "****************" << std::endl;

    std::string temp;
    for (auto &c : buffers)
    {
        if (c != '\n')
        {
            temp += c;
        }
        else
        {
            if (temp != "")
            {
                m_logfile.write(Logger::INFO, temp);
                temp.clear();
            }
        }
    }
    exit(1);
}
UartManger::~UartManger()
{
}