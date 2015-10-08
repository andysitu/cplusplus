#include "../short_lib.h"

bool test(int num, vector<int> & nums) {
   for (int x: nums)
      if (num == x)
         return false;
   return true;
}

void list(vector<int> & fibs) {
   for (int x: fibs)
      cout << x << " ";
}

int main() {
   int seed;
   vector<int> nums;
   int num;
   for (int i = 0; i < 50; i++) {
      cout << "Please give me a random number\n";
      cin >> seed;
      srand(seed);
      num =  rand() % 9;
      if (test(num, nums) == 1)
         nums.push_back(num);
      if (nums.size() == 4)
         break;
   }

   list(nums);
}
