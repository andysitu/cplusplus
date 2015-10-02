#include "../short_lib.h"

int main()
{
   string num;
   cout << "Please type out a number in words.\n";
   cin >> num;

   int out;

   if (num == "zero")
      out = 0;
   else if (num == "one")
      out = 1;
   else if (num == "two")
      out = 2;
   else if (num == "three")
      out = 3;
   else if (num == "four")
      out = 4;
   else {
      cout << "not a number I know\n";
      return 0;
   }

   cout << out << '\n';
   return 0;
}
