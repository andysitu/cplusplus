#include "../short_lib.h"

int main()
{
   vector<int> numbers;
   cout << "Type in some numbers.\n";
   for (int num; cin >> num; ) {
      numbers.push_back(num);
      cout << "Type in some numbers.\n";
   }
   int max = 0, cur_num = 0, count = 0, max_num = 0;
   sort(numbers.begin(), numbers.end());

   for (int i = 0, length = numbers.size(); i < length; i++ )
   {
      if (cur_num == numbers[i]) {
         count++;
      } else {
         cur_num = numbers[i];
         count = 0;
      }

      if (count > max) {
         max_num = cur_num;
         max = count;
      }
   }

   cout << "The mode is " << max_num;
}