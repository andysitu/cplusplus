#include "../short_lib.h"

double ctok(double c) {
   double k = c + 273.15;
   return k;
}

int main() {
   double c = 0;
   cin >> c;
   if (c < -237.15)
      throw runtime_error("temperature was too low.");
   double k = ctok(c);
   cout << k << '\n';
}