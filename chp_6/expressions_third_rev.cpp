#include "../short_lib.h"

double expression()
{
   double left = term();
   Token t = get_token();
   while (true) {
      switch (t.kind) {
         case '+':
            left += term();;
            t = get_token();
            break;
         case '-':
            left -= term();
            t = get_token();
            break;
         default:
            return left;
      }
   }
}