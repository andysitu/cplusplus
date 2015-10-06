#include "../short_lib.h"

int calculate(int max) {
   double value = 0.5;
   int count = 0;
   while ( count < max) {
      value *= 2;
      count++;
      cout << "count: " << count << " " << value << "\n";
   }
   return count;
}

int main() {
   calculate(64);
}