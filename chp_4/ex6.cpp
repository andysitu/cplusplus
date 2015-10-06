#include "../short_lib.h"

int main()
{
   int response;
   cout << "Do you want to convert an integer [0] or a spelled-out number? [1]\n";
   cin >> response;
   if (response == 0) {
      int num;
      vector<string> num_map = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
      cout << "Please give me an integer 0-9: ";
      cin >> num;
      if (num >= 0 && num <= 9)
         cout << "The number is " << num_map[num];
      else
         cout << "I don't understand what you gave me.";
   } else if (response == 1) {
      string num;
      int value = 0;
      cout << "please give me a spelled-out number: ";
      cin >> num;
      if (num =="zero") value = 0;
      else if (num == "one") value = 1;
      else if (num == "two") value = 2;
      else if (num == "three") value = 3;
      else if (num == "four") value = 4;
      else if (num == "five") value = 5;
      else if (num == "six") value = 6;
      else if (num == "seven") value = 7;
      else if (num == "eight") value = 8;
      else if (num == "nine") value = 9;
      else {
         cout << "Unable to comprehend. Bye bye";
         return 0;
      }
      cout << "The number is " << value << '.';
   }
}