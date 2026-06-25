#include "../include/Phone.h"
#include <iostream>
#include <string>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

int main()
{

    //step1 create data modesl  read the file line by line
    std::ifstream file{"data/phones.txt"};

    if (!file)
        {
        std::cerr << "Error :could not open phones.txt\n";
        return 1;
        }

    std::vector<Phone> phones;
    std::string line{};

    //go through each line then parse line to phone object then add to vector
    while (std::getline(file, line))
        {
        std::cout << "Read line:" << line << '\n';
        Phone phone = parsePhoneLine(line);

        //validate the phone before adding, if valid add to vector
        if (!isValidPhone(phone))
            {
            std::cerr << "Invalid phone line: " << line << '\n';
            }
        phones.push_back(phone);
         }

    //Step parse text data to Phone c++ object
    //printng not modifying phone so const, ref to avoid
    for (const Phone& phone:phones)
        {
        std::cout << "Phone=" << phone.id <<
            " region=" << phone.region <<
                " priority=" << phone.priority<<
                    " bandwidth=" << phone.bandwidth <<
                        '\n';
    }



    return 0;
}