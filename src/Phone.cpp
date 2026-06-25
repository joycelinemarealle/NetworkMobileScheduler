#include "../include/Phone.h"

#include <sstream> //allow string as input from keyboard/file
#include <string>

//convert raw text PHONE1 region=us-west priority=3 bandwidth=120
//parse
//to Phone object and send to Scheduler

//breakdown the ine by space using std::isstringstream
//helperfunction to get value after =
//.find('=') returns an index in that substring,capture that index


std::string getValueAfterEqual(std::string& token)
{
    //find position of '=' , check if pos exists, return value after '='
    //sixe_t better since returns unsigned inter (can have +ve or zero for position and size. no -1 index, -100 bytes no,vector cant have -10 elements
    std::size_t pos = token.find('=');

    //if no position npos retunr empty string
    if (pos == std::string::npos) {
        return "";
    }

    return token.substr(pos+1);

}
Phone parsePhoneLine(std::string& line)
{
    Phone phone;

    //splits in fragments based on space
    //PHONE1, region=us-west , priority=3 , bandwidth=120

    std::istringstream stream{line};
    //capture the fragments, need number after =3 for non ids
    std::string regionToken{};
    std::string priorityToken{};
    std::string bandwithToken{};

    stream >> phone.id >> regionToken >> priorityToken >> bandwithToken;
    phone.region =  getValueAfterEqual(regionToken); //region=us-west
    phone.priority =  std::stoi(getValueAfterEqual(priorityToken));  //priority=3
    phone.bandwidth =  std::stoi(getValueAfterEqual(bandwithToken));  //bandwidth=120
//stoi converts string to numeric , getValue.. returns  a string but member ar eint
    return phone;
}

bool isValidPhone(const Phone& phone)
{
    //check valid values id(not empty, region (string not empty, priority >=0, bandwith (>0
    return !phone.id.empty()
    && !phone.region.empty()
    &&phone.priority >=0
    && phone.bandwidth > 0;
}
