#include "../short_lib.h"

int main()
{
   char op;
   double val1, val2, prev_val;
   cout << "Please enter an operator '*', '+', '-', or '/' followed by 2 number values.\n";
   cin >> op >> val1 >> val2;
   prev_val = val1;
   if (op == '*')
      val1 *= val2;
   else if (op == '+')
      val1 += val2;
   else if (op == '-')
      val1 -= val2;
   else if (op == '/')
      val1 /= val2;
   else {
      cout << "I didn't quite understand that. Please run me again.\n";
      return 0;
   }
   cout << prev_val << " " << op << " " << val2 << " results in " << val1 << ".\n";
}