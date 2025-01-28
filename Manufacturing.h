#ifndef MANUFACTURING_H
#define MANUFACTURING_H

#include "Employer.h"

class Manufacturing : public Employer {
private:
    int numProductsMade;

public:
    // Constructor
    Manufacturing(const std::string& name, const std::string& address, const std::string& phone, int numProductsMade)
        : Employer(name, address, phone), numProductsMade(numProductsMade) {
    }

    // Override display method
    void display() const override {
        Employer::display();
        std::cout << "Number of Products Made: " << numProductsMade << "\n";
    }
};

#endif // MANUFACTURING_H
