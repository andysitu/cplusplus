#include "../short_lib.h"

void list(vector<int> & vec) {
   for (int x: vec)
      cout << x << " ";
}

int main() {
   vector<int> values(7);
   string day;

   cout << "Type out the day of the week and the value: ";
   for (int value, position; cin >> day >> value; ) {
      if (day == "Sunday" || day == "Sun" || day == "sunday")
         position = 0;
      else if (day == "Monday" || day == "Mon" || day == "monday")
         position = 1;
      else if (day == "Tuesday" || day == "Tues" || day == "tuesday")
         position = 2;
      else if (day == "Wednesday" || day == "Wed" || day == "wednesday")
         position = 3;
      else if (day == "Thursday" || day == "Thurs" || day == "thursday")
         position = 4;
      else if (day == "Friday" || day == "Fri" || day == "friday")
         position = 5;
      else if (day == "Saturday" || day == "Sat" || day == "saturday")
         position = 6;
      else if (day == "exit")
         break;
      else
         continue;

      values[position] += value;

      cout << "Type out the day of the week and the value. Type 'exit' to exit.\n";
   }

   list(values);
}