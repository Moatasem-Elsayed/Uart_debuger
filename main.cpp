#include <string>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <experimental/filesystem>
#include "UartManger.hpp"
#include <unistd.h>

int main()
{

    UartManger um("logfile.csv", "anaylsisfile.txt");

    while (1)
    {
        um.log_messages();
    }
}