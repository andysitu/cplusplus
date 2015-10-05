#include "../short_lib.h"

void talk() {
   cout << "Enter a number and then 'c', 'm', 'i', or 'f'. Enter '|' to end.\n";
}

int main()
{
   char unit;
   double sum = 0, input, num = 0;
   vector<double> values;
   bool started = false;
   constexpr double centimeter = 1.0/100,
      inch = 2.54 * centimeter,
      foot = 12 * inch;

   talk();
   while (cin >> input >> unit && input != '|') {
      if (unit == 'c')
         input *= centimeter;
      else if (unit == 'i')
         input *= inch;
      else if (unit == 'f')
         input *= foot;
      else if (unit == 'm') {

      }
      else {
         cout << "You entered an illegal unit.";
         talk();
         continue;
      }

      sum += input;
      num++;
      values.push_back(input);
      talk();
   }

   sort(values.begin(), values.end());

   string ending = " m\n";

   cout << "Your values were:\n";
   for (double value: values)
      cout << value << "m ";

   cout << "\nNumber of values: " << num << "\n";
   cout << "Sum: " << sum << ending;
   if (num > 0) {
      cout << "Biggest number: " << values[values.size() - 1] << ending;
      cout << "Smallest number: " << values[0] << ending;
   }

   cout << "Goodbye!\n";
}