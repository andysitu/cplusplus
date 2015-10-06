#include "../short_lib.h"

bool checkPrime(int value, vector<int> & vec)
{
   for (int x: vec)
      if (value % x == 0)
         return false;
   return true;
}

void listPrime(vector<int> & vec)
{
   for (int x: vec)
      cout << x << "\n";
}

int main()
{
   int max = 100;
   cout << "What is the max number to find prime numbers up to? ";
   cin >> max;
   vector<int> vec = {};
   for (int i = 2; i < max + 1; i++) {
      if (checkPrime(i, vec) == true)
         vec.push_back(i);
   }

   listPrime(vec);
}