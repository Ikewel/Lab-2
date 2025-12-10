// LAB 2 #2

#include <iostream>
#include <string>
using namespace std;

int main () {
    int amount;
    string premsubscriber;
    
    cout << "enter amount: " << endl;
    cin >> amount;
    
    cout << "are you premium" << endl;
    cin >> premsubscriber;
    
if ( amount >= 50 || premsubscriber == "yes") {
    cout << "Free shipping eligible" << endl;
}
else {
    cout << "No free shipping" << endl;
}
    return 0;
}    
