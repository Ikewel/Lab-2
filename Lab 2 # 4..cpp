//Lab 2 # 4
#include <iostream>
#include <string>
using namespace std;

int main () {
   int mark;
   cout << "enter mark:";
   cin >> mark;
   
    int grades = mark / 10;
    
    switch (grades) {
        case 10:
        case 9:
          cout << "A" << endl;
          break;
        case 8:
          cout << "B" << endl;
           break;
        case 7:
          cout << "C" << endl;
           break;
        case 6:
          cout << "D" << endl;
           break;
        case 5:
          cout << "F" << endl;
        
    }
    return 0;
}    