#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <experimental/filesystem>
#include "lib/UartManger.hpp"
#include <unistd.h>

int main()
{

    UartManger um("logs/log_file.csv", "logs/analysis_file.txt");

    while (1)
    {
        um.log_messages();
    }
    return 0;
}