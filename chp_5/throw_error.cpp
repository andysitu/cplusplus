#include "../short_lib.h"

int main()
try {
   throw runtime_error("TESTING");
} catch (exception) {
   cout << "I caught an error";
} catch (...) {
   cout << "I caught an unknown error!";
}