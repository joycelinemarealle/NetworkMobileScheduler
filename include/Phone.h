//
// Created by Joyceline Marealle on 6/24/26.
//
#ifndef PHONE_H
#define PHONE_H

#include <string>
struct Phone
{
    std::string id;
    std::string region;
    int priority{};
    int bandwidth{}; //requested bandwidth      //
};

Phone parsePhoneLine(std::string& line);
bool isValidPhone(const Phone& phone);
#endif





