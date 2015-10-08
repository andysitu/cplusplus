#include "../short_lib.h"

vector<int> fib(int n) {
   if (n == 1)
      return {1};
   if (n ==2)
      return {1, 1};
   vector<int> numbers = {1, 1};
   for (int i = 2; i < n; i++) {
      numbers.push_back(numbers[i - 1] + numbers[i - 2]);
   }
   return numbers;
}

void list(vector<int> & fibs) {
   for (int x: fibs)
      cout << x << " ";
}

int main() {
   int num;
   cout << "How many Fibonacci numbers do you want found?: ";
   cin >> num;
   vector<int> fib_num = fib(num);
   list(fib_num);
}