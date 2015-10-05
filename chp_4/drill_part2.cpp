#include "../short_lib.h"

int main()
{
   double min = 0, max = 0, input;
   bool started = false;

   while (cin >> input && input != '|') {
      if (started == false) {
         started = true;
         max = input;
         cout << "Biggest number seen so far: " << input << '\n';
         min = input;
         cout << "Smallest number seen so far: " << input << '\n';
      } else {
         if (input > max) {
            max = input;
            cout << "Biggest number seen so far: " << input << '\n';
         }
         if (input < min) {
            min = input;
            cout << "Smallest number seen so far: " << input << '\n';
         }
      }
   }

   cout << "Goodbye!\n";
}