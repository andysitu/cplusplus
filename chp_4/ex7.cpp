#include "../short_lib.h"

int converter(string num)
{
   int value = 0;
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
   return value;
}

int get_number() {
   int value;
   if (cin >> value)
      return value;
   cin.clear(); // removes error flags and still continues reading same input
               // unless continue is used which skips to next newline.
   string num;
   cin >> num;
   return converter(num);
}

int main()
{
   char op;
   double val1, val2, prev_val;
   cout << "Please enter an operator '*', '+', '-', or '/' followed by 2 number values.\n";
   cin >> op;
   val1 = get_number();
   val2 = get_number();
   prev_val = val1;
   if (op == '*')
      val1 *= val2;
   else if (op == '+')
      val1 += val2;
   else if (op == '-')
      val1 -= val2;
   else if (op == '/')
      val1 /= val2;
   else {
      cout << "I didn't quite understand that. Please run me again.\n";
      return 0;
   }
   cout << prev_val << " " << op << " " << val2 << " results in " << val1 << ".\n";
}