#include "PhoneNumber.h"

bool PhoneNumber::checkNumber(std::string num) {
    for(size_t i = 2;i < num.size();++i) {
        if(!isdigit(num[i])) {
            std::cerr << "Number must have only didgits" << std::endl;
            return false;
        }
    }
    if(num.size() != 12 || num.substr(0, 2) != "+7") {
        std::cerr << "Incorrect number" << std::endl;
        return false;
    }else {
        return true;
    }
}
