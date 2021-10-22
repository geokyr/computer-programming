#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  if(a + b > c && a + c > b && b + c > a) {
    printf("yes\n");
  }
  else {
    printf("no\n");
  }
}