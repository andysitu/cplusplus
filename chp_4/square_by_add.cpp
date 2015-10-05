#include "../short_lib.h"

int square(int x) {
   int sum = 0;
   for (int i = 0; i < x; i++) {
      sum += x;
   }
   return sum;
}

int main() {
   int num;
   cout << "What number do you want squared?\n";
   cin >> num;
   cout << "The number is " << square(num) << '\n';
   int square(int);
}