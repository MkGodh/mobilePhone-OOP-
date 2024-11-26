#include "MobilePhone.h"

#include <AdressBook.h>


void MobilePhone::add() {
    std::string name;
    std::string number;
    std::cout << "Please input name: " << std::endl;
    std::cin >> name;
    std::cout << "Please input mobile phone: " << std::endl;
    std::cin >> number;
    if(myPhone.checkNumber(number)) {
        myContact.setName(name);
        myContact.setPhone(number);
        myAdressBook.addContact(myContact);
    }

}

void MobilePhone::call() {
    std::cin.ignore();
    std::string data;

    std::cout << "Please input 1 to find and call contact by name, " <<
                 "2 for find adn call contact by phone or 3 just for call number: " << std::endl;

    std::getline(std::cin, data);
    if(data == "1") {

        std::cout << "Input contact name: " << std::endl;
        std::getline(std::cin, data);


        Contact* lookForContact = myAdressBook.findContactByName(data);

        if(lookForContact == nullptr) {
            std::cout << "Contact no found." << std::endl;
            return;
        }

        std::cout << "CAll: " << lookForContact->getName() << " " << lookForContact->getPhoneNums() << std::endl;
    }
    else if (data == "2") {
        std::cout << "Input contact phone: " << std::endl;
        std::getline(std::cin, data);

        Contact* lookForContact = myAdressBook.findContactByPhone(data);

        if(lookForContact == nullptr) {
            std::cout << "Contact not found." << std::endl;
            return;
        }
        std::cout << "CAll: " << lookForContact->getName() << " " << lookForContact->getPhoneNums() << std::endl;
    }
    else if(data == "3") {
        std::cout << "Input phone number to call: " << std::endl;
        std::getline(std::cin, data);
        myPhone.checkNumber(data);
        std::cout << "Calling: " << data << std::endl;
    }
    else {
        std::cout << "Unknown command. Back to main menu" << std::endl;
        return;
    }


}

void MobilePhone::sms() {
    std::cin.ignore();
    std::string data;
    std::string text;
    std::cout << "Please input:\n1 to find and send sms to contact by name " <<
                 "\n2 for find and send sms to contact by phone\n3 to send sms to unknown number: " << std::endl;
    std::getline(std::cin, data);

    if(data == "1") {

        std::cout << "Input contact name: " << std::endl;
        std::getline(std::cin, data);


        Contact* lookForContact = myAdressBook.findContactByName(data);

        if(lookForContact == nullptr) {
            std::cout << "Contact no found." << std::endl;
            return;
        }
        std::cout << "Input text: " << std::endl;
        std::getline(std::cin, text);

        std::cout << "Sending SMS to: " << lookForContact->getName() <<
              " <" << lookForContact->getPhoneNums() << ">: " << text <<std::endl;
    }
    else if (data == "2") {
        std::cout << "Input contact phone: " << std::endl;
        std::getline(std::cin, data);

        Contact* lookForContact = myAdressBook.findContactByPhone(data);

        if(lookForContact == nullptr) {
            std::cout << "Contact not found." << std::endl;
            return;
        }
        std::cout << "Input text: " << std::endl;
        std::getline(std::cin, text);

        std::cout << "Sending SMS to: " << lookForContact->getName() <<
              " <" << lookForContact->getPhoneNums() << ">: " << text <<std::endl;
    }
    else if(data == "3") {
        std::cout << "Input phone number to call: " << std::endl;
        std::getline(std::cin, data);
        if(myPhone.checkNumber(data)) {
            std::cout << "Input text: " << std::endl;
            std::getline(std::cin, text);

            std::cout << "Sending SMS to: " << data << " : " << text <<std::endl;
        }else {
            std::cerr << "Wrong number format. Try again!" << std::endl;
            return;
        }
    }
    else {
        std::cout << "Unknown command. Back to main menu" << std::endl;
        return;
    }

}


