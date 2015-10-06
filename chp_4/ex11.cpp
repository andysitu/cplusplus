#include "../short_lib.h"

int checkPrime(vector<int> & vec)
{
   for (int x: vec)
      cout << x << "\n";
}

int main()
{
   vector<int> vec = {1,2,3,4,5};
   checkPrime(vec);
}