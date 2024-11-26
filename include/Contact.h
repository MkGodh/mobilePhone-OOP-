#ifndef CONTACT_H
#define CONTACT_H
#include <string>


class Contact {
private:
 std::string names;
 std::string phoneNums;
public:
 std::string getName();
 std::string getPhoneNums();
 void setName(const std::string& name);
 void setPhone(const std::string& phone);
};



#endif