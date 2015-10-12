#include "../short_lib.h"

int main()
try {
   while (cin)
      cout << "=" << expression << "\n";
}
catch(exception& e) {
   cerr << e.what() << '\n';
   return 1;
}
catch(...) {
   cerr << "exception \n";
   return 2;
}