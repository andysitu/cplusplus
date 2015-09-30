#include "../short_lib.h"

int main()
{
   cout<< "Hello, plus enter your name and then age\n";
   double age = 0;
   string name = "Unknown";
   cin>> name>> age;
   cout<< "Hello, "<< name<< ' '<< age * 12<< "!\n";
}
