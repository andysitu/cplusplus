#include "../short_lib.h"

double expression() {
   double left = term();
   Token t = get_token(); // get next token
   switch(t.kind) {
      case '+':
         return left + expression();
      case '-':
         return left - expression();
      default:
         return left;
   }
}