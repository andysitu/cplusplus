#include "../short_lib.h"

int calculate(int grains) {
   int value = 1, count = 0;
   while ( value < grains) {
      value *= 2;
      count++;
      cout << "count: " << count << " " << value << "\n";
   }
   return count;
}

void talk(int grains) {
   cout << "For " << grains << " grains, it takes " << calculate(grains) << " squares.\n";
}

int main() {
   talk(1000);
   talk(1000000);
   talk(1000000000);
}