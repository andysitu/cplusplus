double primary()
{
   Token t = get_token();
   switch (t.kind) {
      case '(':
      {
         double d = expression();
         t = get_token();
         if (t.kind != ')') throw runtime_error("')' expected");
         return d;
      }
      case '8':
         return t.value;
      default:
         throw runtime_error("primary expected");
   }
}