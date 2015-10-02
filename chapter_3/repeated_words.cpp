#include "../short_lib.h"

int main()
{
   int num_words = 0;
   string current;
   string previous = " ";
   while (cin>> current) {
      ++num_words;
      if (current == previous)
         cout<< "repeated word: "<< current<<"in word "<< num_words<< '\n';
      previous = current;
   }
}
