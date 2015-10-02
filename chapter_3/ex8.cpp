#include "../short_lib.h"

int main()
{
   int number;
   cout << "Please enter a number: ";
   cin >> number;

   string number_type;
   if (number % 2 == 0)
      number_type = "even";
   else
      number_type = "odd";

   cout << "The value " << number << " is an " + number_type + " number.\n";
}
