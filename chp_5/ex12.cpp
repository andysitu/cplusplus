#include "../short_lib.h"

int main() {

   vector<int> num = {1, 2, 3, 4};
   int a, b, c, d, bull, cow;

   for ( ; ; ) {
      bull = 0; cow = 0;
      cout << "Please guess 4 numbers separated by spaces between 0-9.\n";
      cin >> a >> b >> c >> d;
      for (int i = 0, length = num.size(); i < length; i++) {
         if ((i == 0 && a == num[i]) || (i == 1 && b == num[i]) || (i == 2 && c == num[i]) || (i == 3 && d == num[i]))
            bull++;
         else if (num[i] == a || num[i] == b || num[i] == c || num[i] == d)
            cow++;
      }
      cout << bull << " bull and " << cow << " cow\n";
      if (bull == 4)
         break;
   }
}