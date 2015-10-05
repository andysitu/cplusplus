#include "../short_lib.h"

int main()
{
   vector<string> words;
   for (string word; cin >> word && word != "exit"; )
      words.push_back(word);
   cout << "Number of words: " << words.size() << '\n';

   sort(words.begin(), words.end());

   for (int i = 0, length = words.size(); i < length; i++)
      if (i == 0 || words[i-1] != words[i])
         cout << words[i] << '\n';
}