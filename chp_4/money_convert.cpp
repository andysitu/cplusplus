// Need to use -std=c++11

#include "../short_lib.h"

int main()
{
   constexpr double yen_to_dollar = 0.0083,
      euro_to_dollar = 1.12,
      pound_to_dollar = 1.52;

   double amount;
   string type;

   cout << "Please type in an amount and then the type of currency\n";
   cout << "Type in either 'yen', 'euro', or 'pound.'\n";
   cin >> amount >> type;

   if (type == "yen")
      amount *= yen_to_dollar;
   else if (type == "euro")
      amount *= euro_to_dollar;
   else if (type == "pound")
      amount *= pound_to_dollar;
   else {
      cout << "You typed in an unknown currency type.\n";
      return 0;
   }
   cout << "$" << amount;
}