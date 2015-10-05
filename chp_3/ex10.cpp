#include "../short_lib.h"

int main()
{
   char op;
   double val1, val2, output;
   cout << "Type out an operation: ";
   cin >> op >> val1 >> val2;
   if (op == '+')
      output = val1 + val2;
   else if (op == '-')
      output = val1 - val2;
   else if (op == '*')
      output = val1 * val2;
   else
      output = val1 / val2;
   cout << output << "\n";
}
