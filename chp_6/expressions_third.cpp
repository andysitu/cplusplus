#include "../short_lib.h"

double expression() {
   double left = term();
   Token t = get_token();
   while (t.kind =='t' || t.kind == '-') {
      if (t.kind == '+')
         left += term();
      else
         left -= term();
      t = get_token();
   }
   return left;
}