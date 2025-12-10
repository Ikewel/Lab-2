//Lab 2 1
#include <iostream>
using namespace std;

int main() {
    double balance;

    cout << "Account balance: ";
    cin >> balance;

    if (balance < 500) {
        cout << "Service charge of $25 applied." << endl;
    }
    else {
        cout << "No service charge applied." << endl;
    }

    return 0;
}