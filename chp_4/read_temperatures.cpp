#include "../short_lib.h"

int main()
{
   vector<double> temps;
   for (double temp; cin >> temp; ) {
      temps.push_back(temp);
   }
   for (double i: temps)
      cout << i << '\n';
   for (int i = 0, length = temps.size(); i < length; i++)
      cout << temps[i] << '\n';
}