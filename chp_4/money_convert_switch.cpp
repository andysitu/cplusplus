// Need to use -std=c++11

#include "../short_lib.h"

int main()
{
   constexpr double yen_to_dollar = 0.0083,
      euro_to_dollar = 1.12,
      pound_to_dollar = 1.52;

   double amount;
   char type;

   cout << "Please type in an amount and then the type of currency\n";
   cout << "Type in either 'y' for yen, 'e' for euro, or 'p' for pound.\n";
   cin >> amount >> type;

   switch(type) {
      case'y':
         amount *= yen_to_dollar; break;
      case 'e':
         amount *= euro_to_dollar; break;
      case 'p':
         amount *= pound_to_dollar; break;
      default: {
         cout << "You typed in an unknown currency type:" << type << "\n";
         return 0;
      }
   }

   
   cout << "$" << amount;
}