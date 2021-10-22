#include "pzhelp"
FUNC int gcd(int a, int b) {
  a = abs(a); b = abs(b);
  while (a>0 AND b>0)
    if(a>b) a = a % b;
    else b = b % a;
  return a+b;
}

PROGRAM {
 long long int n, i, b, c, d, e, p1, p2, p, u, y;
 char a;
 n = READ_INT(); SKIP_LINE();
 FOR(i, 1 TO n) {
   a = getchar(); b = READ_INT(); c = READ_INT(); d = READ_INT(); e = READ_INT();
   if (c!=0 and e!=0){
   switch (a) {
     case '+': p1 = b*e+c*d; p2 = c*e; break;
     case '-': p1 = b*e-c*d; p2 = c*e; break;
     case '*': p1 = b*d; p2 = c*e; break;
     case '/': if (d!=0) {
               p1 = b*e; p2 = c*d; break;
               }
               else {WRITELN("error"); continue;}
   }
   p = p1 - p2*(p1/p2);
   u = p;
   y = p2;
   int giwrgos = gcd (u, y);
   if (p1*p2<0 and p1/p2==0)
     WRITELN("-0" , abs(p/giwrgos), abs(p2/giwrgos));
   else WRITELN(p1/p2, abs(p/giwrgos), abs(p2/giwrgos));
        SKIP_LINE();
   }
   else{
    WRITELN("error");
  SKIP_LINE();
   }
   }
}