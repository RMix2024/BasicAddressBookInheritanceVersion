#include <iostream>
#include <vector>
#include "Employer.h"
#include "Sales.h"
#include "Service.h"
#include "Manufacturing.h"

using namespace std;

int main() {
    vector<Employer*> employers;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Employer Record\n";
        cout << "2. View All Employers\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string name, address, phone;
            int type;

            cout << "\nEnter Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Address: ";
            getline(cin, address);
            cout << "Enter Phone: ";
            getline(cin, phone);

            cout << "\nSelect Employer Type:\n";
            cout << "1. Sales\n";
            cout << "2. Service\n";
            cout << "3. Manufacturing\n";
            cout << "Enter choice: ";
            cin >> type;

            if (type == 1) {
                double commissionRate;
                cout << "Enter Commission Rate (%): ";
                cin >> commissionRate;
                employers.push_back(new Sales(name, address, phone, commissionRate));
            }
            else if (type == 2) {
                int hoursWorked;
                cout << "Enter Hours Worked: ";
                cin >> hoursWorked;
                employers.push_back(new Service(name, address, phone, hoursWorked));
            }
            else if (type == 3) {
                int numProductsMade;
                cout << "Enter Number of Products Made: ";
                cin >> numProductsMade;
                employers.push_back(new Manufacturing(name, address, phone, numProductsMade));
            }
            else {
                cout << "Invalid selection. Try again.\n";
            }
        }
        else if (choice == 2) {
            if (employers.empty()) {
                cout << "\nNo employer records available.\n";
            }
            else {
                cout << "\nEmployer Records:\n";
                for (const auto& emp : employers) {
                    emp->display();
                    cout << "------------------------\n";
                }
            }
        }
        else if (choice != 3) {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 3);

    // Free allocated memory
    for (auto emp : employers) {
        delete emp;
    }

    cout << "Exiting program. Goodbye!\n";
    return 0;
}
