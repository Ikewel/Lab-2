//Lab 2 5
#include <iostream>
using namespace std;

int main() {
    int overdueDays;
    double fine = 0.0;

    cout << "Overdue days: ";
    cin >> overdueDays;

    if (overdueDays > 0) {
        if (overdueDays <= 5) {
            fine = overdueDays * 0.50;
        }
        else {
            if (overdueDays <= 10) {
                fine = overdueDays * 1.00;
            }
            else {
                fine = overdueDays * 2.00;
            }
        }

        cout << "Total fine is $" << fine << endl;
    }
    else {
        cout << "Invalid number of days." << endl;
    }

    return 0;
}