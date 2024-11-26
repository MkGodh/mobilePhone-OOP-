#ifndef ADRESSBOOK_H
#define ADRESSBOOK_H
#include <string>
#include <vector>
#include <Contact.h>
#include <iostream>

class AdressBook {
private:
    std::vector<Contact> phoneBook;
public:
    void addContact(Contact& contact);
    Contact* findContactByName(const std::string& name);
    Contact* findContactByPhone(const std::string& phoneNumber);
};



#endif
