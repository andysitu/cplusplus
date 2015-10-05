#include "../short_lib.h"

int main()
{
   for (int i = 0; i < 100; i += 2) {
      cout << i << '\t' << pow(i, 2) << '\n';
   }
}