//LAB 2 # 9

#include <iostream>
#include <string>
using namespace std;

int main () {
   int n;
   int sum = 0;
   int i = 1;
   
   cout << "enter a positive";
   cin >> n;
   
   while (i <= n) {
       sum += i;
       i++;
   }
   cout << "sum of numbers from 1 to " << n << " is " << sum << endl;
    return 0;
}  