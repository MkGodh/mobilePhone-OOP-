#include "AdressBook.h"

#include <stdexcept>


void AdressBook::addContact(Contact& contact) {
    phoneBook.push_back(contact);
    std::cout << "Added contact: " << contact.getName() << std::endl;
}
Contact* AdressBook::findContactByName(const std::string& name) {
    for(auto& contact : phoneBook) {
        if(contact.getName() == name) {
            return &contact;
        }
    }
    return nullptr;
}
Contact* AdressBook::findContactByPhone(const std::string& phoneNumber) {
    for(auto& contact : phoneBook) {
        if(contact.getPhoneNums() == phoneNumber) {
            return &contact;
        }
    }
    return nullptr;
}
