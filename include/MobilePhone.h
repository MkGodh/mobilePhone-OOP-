#ifndef MOBILEPHONE_H
#define MOBILEPHONE_H

#include <PhoneNumber.h>
#include <Contact.h>
#include <AdressBook.h>

class MobilePhone {
private:
    PhoneNumber myPhone;
    AdressBook myAdressBook;
    Contact myContact;
public:
    void add();
    void call();
    void sms();


};



#endif