#include "../short_lib.h"

bool inVec(int num, vector<int> & nums)
{
   for (int x: nums)
      if (x == num)
         return true;
   return false;
}

void listPrime(vector<int> & vec)
{
   for (int x: vec)
      cout << x << "\n";
}

void addMultiples(int num, vector<int> & nums, int max) 
{
   int mult = num;
   for (int i = 1; mult <= max; i++) 
   {
      mult = num * i;
      if (mult > max)
         break;
      if (inVec(mult, nums) == 0)
         nums.push_back(mult);
   }
}

int main()
{
   int max = 100;
   vector<int> numbers, primes;
   for (int i = 2; i < max + 1; i++) 
   {
      if (inVec(i, numbers) == 0) 
      {
         addMultiples(i, numbers, max);
         primes.push_back(i);
         sort(numbers.begin(), numbers.end());
      }
   }
   listPrime(primes);
}