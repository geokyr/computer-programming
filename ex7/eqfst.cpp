#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  double a, b;
  scanf("%lf %lf", &a, &b);
  if(a == 0 && b == 0) {
    printf("trivial\n");
  }
  else if(a == 0 && b != 0) {
    printf("impossible\n");
  }
  else if(a != 0 && b != 0) {
    printf("%.6lf\n", -(b / a));
  }
  else if(a != 0 && b == 0) {
    printf("0.000000\n");
  }
}