//LAB 2 10
#include <iostream>
#include <string>
using namespace std;

int main () {
   int number = 7;
   int guess;
   
   do {
       cout << "guess a number: ";
       cin >> guess;
       
       if (guess == number) {
           cout << "you are correct!" << endl;
       }
       else { cout << "That is not correct try again" << endl;
   }
  }
  while (guess != number);
    return 0;
}    
