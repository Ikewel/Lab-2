//Lab 2 6
#include <iostream>
#include <string>
using namespace std;

int main () {
   int weight;
   cout << "enter weight: " << endl;
   cin >> weight;
   
   if (weight < 5) {
       cout << "$5";
   }
   else if (weight > 20) {
       cout << "$20";
   }
   else {
       cout << "$10";
   }
    return 0;
}    
