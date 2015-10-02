#include "../short_lib.h"

int main()
{
   int penny, nickel, dime, quarter, half;
   cout << "How many pennies do you have?\n";
   cin >> penny;
   cout << "How many nickels do you have?\n";
   cin >> nickel;
   cout << "How many dimes do you have?\n";
   cin >> dime;
   cout << "How many quarters do you have?\n";
   cin >> quarter;
   cout << "How many half dollars do you have?\n";
   cin >> half;
   int sum = penny + nickel * 5 + dime * 10 + quarter * 25 + half * 50;
   string c1 = " pennies", c2 = " nickels", c3 = " dimes", c4 = " quarters", 
      c5 = " half dollars", begin = "You have ", end = ".\n";
   if (penny == 1)
      c1 = " penny";
   if (nickel == 1)
      c2 = " nickel";
   if (dime == 1)
      c3 = " dime";
   if (quarter == 1)
      c4 = " quarter";
   if (half == 1)
      c5 = " half dollar";

   cout << begin << penny << c1 << end << begin << nickel << c2 << end 
      << begin << dime << c3 << end << begin << quarter << c4 << end 
      << begin << half << c5 << end;

   int dollar = sum / 100, cents = sum % 100;
   cout << "The value of your coins is $" << dollar << "." << cents << ".\n";
}
