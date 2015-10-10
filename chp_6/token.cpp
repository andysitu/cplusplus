#include "../short_lib.h"

int main() {
   class Token {
   public:
      char kind;
      double value;
   };

   Token t;
   t.kind = '+';
   Token t2;
   t2.kind = '8';
   t2.value = 3.14;

   Token tt = t;
   t = t2;
   cout << t.value;

   Token t1 {'+'};
   Token t2 {'8', 11.5};
}