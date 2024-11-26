#include <iostream>

#include "MobilePhone.h"
#include "PhoneNumber.h"

int main() {
    std::string command;
    MobilePhone myPhone;
    std::cout << "Beep" << std::endl;
    while(command != "exit") {
        std::cin >> command;
        if(command == "add") {
           myPhone.add();
        }else if(command == "call") {
            myPhone.call();
        }else if(command == "sms") {
            myPhone.sms();
        }else {
            std::cout << "Unknown command.Try again." << std::endl;
        }
    }
}
