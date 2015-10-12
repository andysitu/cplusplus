#include "../short_lib.h"

double expression()
{
   double left = term();
   Token t = ts.get();

   while (true) {
      switch (t.kind) {
         case '+':
            left += term()
      }
   }
}