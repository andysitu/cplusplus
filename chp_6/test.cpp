#include "../short_lib.h"

class Rect {
public:
   double height;
   double width;
   Rect(double val1, double val2)
      :height(val1), width(val2) {}
};

int main() {
   Rect t(40, 40);
   cout << t.height << " " << t.width;
}