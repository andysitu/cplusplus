#include "../short_lib.h"

int main()
{
   double min = 1, max = 100, divide;
   char response;

   cout << "Please think of a number between " << min << " and " << max <<".\n";
   for (int questions = 0; questions < 7; questions++ ) {
      divide = round( (max - min) /2 ) + min;
      cout << "Is the number equal or greater than " << divide << "?\n";
      cin >> response;
      if (response == 'y') {
         min = divide;
      } else if (response == 'n') {
         max = divide - 1;
      } else {
         cout << "I didn't quite catch that.\n";
         questions--;
      }
      //cout << "MY guess is " << min << " and " << max  << " and divide of " << divide << ".\n";
   }
   cout << "Your number is " << min << ".\n";
}