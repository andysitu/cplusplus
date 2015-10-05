#include "../short_lib.h"

int main() {
   vector<int> numbers = {1, 2, 3, 4, 5};
   for (int i = 0, len = numbers.size(); i < len; i++)
      cout << numbers[i] << '\n';
   numbers.push_back(6); // member function to member function call
   for (int x : numbers)
      cout << numbers[x] << '\n';
}