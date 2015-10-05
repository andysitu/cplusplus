#include "../short_lib.h"

int main()
{
   int i = 0;
   while (i < 100)
   {
      cout << i << '\t' << char('a' + i) << '\n';
      i++;
   }
}