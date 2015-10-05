#include "../short_lib.h"

int square(int x) {
   return x * x;
}

int main() {
   int value = square(2);
   cout << value << "\t" << square(100);
}