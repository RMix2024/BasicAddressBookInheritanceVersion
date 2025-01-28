#ifndef SERVICE_H
#define SERVICE_H

#include "Employer.h"

class Service : public Employer {
private:
    int hoursWorked;

public:
    // Constructor
    Service(const std::string& name, const std::string& address, const std::string& phone, int hoursWorked)
        : Employer(name, address, phone), hoursWorked(hoursWorked) {
    }

    // Override display method
    void display() const override {
        Employer::display();
        std::cout << "Hours Worked: " << hoursWorked << " hours\n";
    }
};

#endif // SERVICE_H
