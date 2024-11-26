#include "Contact.h"


std::string Contact::getName(){
    return names;
}
std::string Contact::getPhoneNums() {
    return phoneNums;
}

void Contact::setName(const std::string& name) {
    this->names = name;
}
void Contact::setPhone(const std::string& phone) {
    this->phoneNums = phone;
}