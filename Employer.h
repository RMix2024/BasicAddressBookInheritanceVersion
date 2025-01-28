#ifndef EMPLOYER_H
#define EMPLOYER_H

#include <string>
#include <iostream>

class Employer {
protected:
    std::string name;
    std::string address;
    std::string phone;

public:
    // Constructor
    Employer(const std::string& name = "", const std::string& address = "", const std::string& phone = "")
        : name(name), address(address), phone(phone) {
    }

    // Virtual Destructor
    virtual ~Employer() {}

    // Virtual method to display employer details
    virtual void display() const {
        std::cout << "Name: " << name << "\n"
            << "Address: " << address << "\n"
            << "Phone: " << phone << "\n";
    }
};

#endif // EMPLOYER_H
