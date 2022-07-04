#include "../lib/UartManger.hpp"


UartManger::UartManger(std::string log_file, std::string analysis_file) 
  : m_logfile(log_file), 
    m_filemanger(analysis_file) {
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
