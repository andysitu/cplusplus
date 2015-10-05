#include "../short_lib.h"

int main()
{
   vector<double> temps;
   for (double temp; cin >> temp; )
      temps.push_back(temp);
   double sum = 0;
   for (double t: temps)
      sum += t;
   cout << "Average temperature is " << sum / temps.size() << '\n';
   sort(temps.begin(), temps.end());
   cout << "Median temperature is " << temps[temps.size()/2] << '\n';
}