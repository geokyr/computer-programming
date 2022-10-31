#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main() {
  double x, y;
  scanf("%lf %lf", &x, &y);
  if(x * x + y * y == 1) {
    printf("border\n");
  }
  else if(x * x + y * y > 1) {
    printf("outside\n");
  }
  else {
    printf("inside\n");
  }
}