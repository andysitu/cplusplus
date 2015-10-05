#include "../short_lib.h"

int main()
{
   vector<string> censor = {"fuck", "shit"};
   for (string word; cin >> word && word != "exit"; ) {
      for (int i = 0, length = censor.size(); i < length; i++)
         if (word == censor[i])
            word = "BEEP";
      cout << word << ' ';
   }
   cout << '\n';
}