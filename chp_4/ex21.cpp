#include "../short_lib.h"

void findScore(int score, vector<string> & names, vector<int> & scores)
{
   for (int i = 0, length = names.size(); i < length; i++)
   {
      if (score == scores[i])
         cout << names[i] << " " << scores[i] << "\n";
   }
   
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
   cout << "What score would you want me to find? ";
   cin >> score;
   findScore(score, names, scores);  
}