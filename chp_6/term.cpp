#include "../short_lib.h"

double term()
{
   double left = primary();
   Token t = get_token();
   while (true) {
      switch (t.kind) {
      case '*':
         left *= primary();
         t = get_token();
         break;
      case '/':
      { // initializing var must be in blocks
         double d = primary();
         if (d == 0) throw runtime_error("divide by zero");
         left /= d;
         t = get_token();
         break;
      }
      default:
         return left;
      }
   }
}