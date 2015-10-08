#include "../short_lib.h"

int main() {
   double a, b, c, sq;
   cout << "Enter a, b, and c:\n";
   cin >> a >> b >> c;
   sq = b * b - 4 * a * c;
   if (sq < 0) {
      cout << "The solution has imaginary roots.\n";
      return 0;
   }
   double ans1, ans2;
   ans1 = (-b + sqrt(sq)) / (2 * a);
   ans2 = (-b - sqrt(sq)) / (2 * a);
   cout << "THe answers are " << ans1 << " and " << ans2 << "\n";
   cout << "This results in answers " << a * ans1 * ans1 + b * ans1 + c << " and "
      << a * ans2 * ans2 + b * ans2 + c << ".\n";
}