#include "../short_lib.h"

int findScore(string name, vector<string> & names, vector<int> & scores)
{
   for (int i = 0, length = names.size(); i < length; i++)
   {
      if (name == names[i])
         return scores[i];
   }
   return -1;
}

bool check(string name, vector<string> & names)
{
   for (string x: names)
      if (name == x)
         return false;
   return true;
}

void listVec(vector<string> & names, vector<int> & scores)
{
   for (int i = 0, length = names.size(); i < length; i++)
      cout << names[i] << " " << scores[i] << '\n';
} 

int main()
{
   int score;
   vector<string> names;
   vector<int> scores;
   string message = "Enter a number and a value. Enter NoName 0 to exit.\n";
   cout << message;
   for (string name; cin >> name >> score && (name != "NoName" && score!= 0) ;)
   {
      if (check(name, names) == 1)
      {
         names.push_back(name);
         scores.push_back(score);
      }
      cout << message;
   }
   cout << "What name would you want me to find? ";
   string name;
   cin >> name;
   score = findScore(name, names, scores);
   if (score < 0)
      cout << "name not found";
   else
      cout << score;
}