//lab2 3
#include <iostream>
#include <string>
using namespace std;

int main () {
    int temperatrue;
    
    cout << "enter temp:";
    cin >> temperatrue;
    
    if (temperatrue < 68) {
        cout << "Turning on the furnace";
    }
    else if (temperatrue > 75) {
        cout << "Turning on the air conditioner";
    }
    else {
        cout << "System off";
    }
    return 0;
}    
