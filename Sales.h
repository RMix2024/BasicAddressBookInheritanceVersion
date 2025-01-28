#ifndef SALES_H
#define SALES_H

#include "Employer.h"

class Sales : public Employer {
private:
    double commissionRate;

public:
    // Constructor
    Sales(const std::string& name, const std::string& address, const std::string& phone, double commissionRate)
        : Employer(name, address, phone), commissionRate(commissionRate) {
    }

    // Override display method
    void display() const override {
        Employer::display();
        std::cout << "Commission Rate: " << commissionRate << "%\n";
    }
};

#endif // SALES_H
