#include "../short_lib.h"

double ctok(double c) {
   double k = c + 273.15;
   if (c < -237.15)
      throw runtime_error("temperature is too low.");
   return k;
}

double ktoc(double k) {
   double c = k - 273.15;
   if (k < 0)
      throw runtime_error("temperature is too low.");
   return c;
}

int main() {
   double temp = 0, conv_temp;
   char option;
   cout << "Enter 'k' to convert to Kelvin from Celsius or 'c' for the reverse.\n";
   cin >> option;
   cout << "Enter the temperature: ";
   cin >> temp;
   try {
      if (option == 'k')
         conv_temp = ctok(temp);
      else if (option == 'c')
         conv_temp = ktoc(temp);
      cout << conv_temp << '\n';
   } catch(exception & e) {
      cout << e.what() << "\n";
   }
   
}