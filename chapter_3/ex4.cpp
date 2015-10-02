#include "../short_lib.h"

int main()
{
   int val1, val2;
   cout << "Enter two values: ";
   cin >> val1 >> val2;
   double larger, smaller;
   if (val1 > val2) {
      larger = val1;
      smaller = val2;
   } else {
      larger = val2;
      smaller = val1;
   }
   double diff = larger / smaller;

   cout << larger << " is larger and " << smaller << " is smaller. Their sums are ";
   cout << val1 + val2 << " with a difference of " << larger - smaller << ". ";
   cout << "Their produce is " << val1 * val2 << ". Their ratio is " << diff << ".\n";
   return 0;
}
