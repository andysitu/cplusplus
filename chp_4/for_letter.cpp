#include "../short_lib.h"

int main()
{
   for (int i = 0; i < 100; i++) {
      cout << i << "\t" << char('A' + i) << '\n';
      cout << i << "\t" << int('A' + i) << '\n';
   }

}