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
   int max = 10;
   cout << "How many prime numbers do I find? ";
   cin >> max;
   vector<int> primes = {};
   for (int i = 2; primes.size() < max; i++) {
      if (checkPrime(i, primes) == true)
         primes.push_back(i);
   }

   listPrime(primes);
}