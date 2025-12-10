//Lab 2 7 
#include <iostream>
using namespace std;

int main() {
    int age;
    double Income;

    cout << "Age: ";
    cin >> Age;

    cout << "Monthly income: ";
    cin >> Income;

    if (Age >= 21) {
        if (Age <= 30) {
            if (Income >= 2000) {
                cout << "You are eligible for the loan." << endl;
            }
            else {
                cout << "Not eligible Income must be at least $2000." << endl;
            }
        }
        else { 
            if (Income >= 1500) {
                cout << "You are eligible for the loan." << endl;
            }
            else {
                cout << "Not eligible Income must be at least $1500." << endl;
            }
        }
    }
    else {
        cout << "Not eligible Must be at least 21 years old." << endl;
    }

    return 0;
