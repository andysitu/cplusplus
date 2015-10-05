#include "../short_lib.h"

int main()
{
   string first_name;
   cout << "Enter the name of the person you want to write to.\n";
   cin >> first_name;

   string friend_name;
   cout << "Please give a friend's name.\n";
   cin >> friend_name;

   char friend_sex;
   while (friend_sex != 'm' && friend_sex != 'f') {
      cout << "Is the friend male or female? Please type m or f and thn press enter.\n";
      cin >> friend_sex;
   }

   int age;
   cout << "How old are you?\n";
   cin >> age;

   string body =  "\tHow are you? It's been quite a while hasn't it? ";
   body += "I'm doing okay, just getting by in life. By the way, have you seen ";
   body += friend_name + " lately? If you see " + friend_name + " please ask ";
   if (friend_sex == 'm')
      body += "him";
   else
      body += "her";
   body += " to call me.\n\nI hear you just had a birthday and you are ";

   string body1;
   body1 = " years old. ";
   if (age <12)
      body1 += "Next year you will be  another year older! ";
   else if (age == 17)
      body1 += "Next year you will be able to vote. ";
   else if (age > 69)
      body1 += "I hope you are enjoying retirement";
   body1+= "\n";

   cout << "Dear " << first_name << ",\n";
   cout << body << age << body1 << "Yours sincerely,\nAndy\n";
   
}
