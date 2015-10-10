#include "../short_lib.h"

int main() {
   cout << "Please enter expression (only -, +, *, /)\nType 'x' to end: ";
   int lval = 0, rval = 0, res;
   cin >> lval;

   if (!cin)
      throw runtime_error("no first operand");
   for (char op; cin >> op;) {
      if (op!= 'x' ) cin >> rval;;
      if (!cin) throw runtime_error("no second operand"); 
      switch(op) {
         case '+':
            lval += rval; break;
         case '-':
            lval -= rval; break;
         case '*':
            lval *= rval; break;
         case '/':
            lval /= rval; break;
         default:
            cout << "Result: " << lval <<'\n';
            return 0;
      }
   }
   throw runtime_error("bad expression");
}