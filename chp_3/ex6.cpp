#include "../short_lib.h"

int main()
{
   int val1, val2, val3;
   cout << "Please enter 3 values: ";
   cin >> val1 >> val2 >> val3;
   int first, second, third;
   if (val1 >= val2 && val1 >= val3) {
      third = val1;
      first = val2;
      second = val3;
   } else if (val2 >= val1 && val2 >= val3) {
      third = val2;
      first = val1;
      second = val3;
   } else {
      third = val3;
      first = val1;
      second = val2;
   }

   if (first > second) {
      int store = second;
      second = first;
      first = store;
   }

   cout << first << ", " << second << ", " << third << '\n';
}
