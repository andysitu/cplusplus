#include "../short_lib.h"

int expression() {
   double left = expression(); // infinite recursive loop
   Token t = get_token();
   switch(t.type) {
      case '+':
         return left + term();
      case '-':
         return left - term();
      default:
         return left;
   }
}