#include <iostream>
#include <string>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

int main()
{

    //step1 create data modesl  read the file line by line
    std::ifstream file{"phones.text"};

    if (!file)
        {
        std::cerr << "Error :could not open phones.text\n";
        return 1;
        }

    std::string line{};

    while (std::getline(file, line))
        {
        std::cout << "Read line:" << line << '\n';
         }

    //Step parse text data to Phone c++ object

    return 0;
}