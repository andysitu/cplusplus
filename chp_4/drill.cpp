#include "../short_lib.h"

int main()
{
   double val1, val2, stor;
   while (cin >> val1 >> val2 && val1 != '|' && val2 != '|') {
      if ( val1 == val2 ) {
         cout << "The numbers are equal.\n";
         cout << "\n";
      } else {
         if (val1 < val2) {
         } else if (val1 > val2) {
            stor = val1;
            val1 = val2;
            val2 = stor;
         }
         cout << "The smaller value is " << val1 << "\n";
         cout << "The larger value is " << val2 << "\n";
         if ( abs(val1 - val2) < 1.0 / 100 ) {
            cout << "The numbers are almost equal.\n";
         }
         cout << "\n";
      }
   }
}