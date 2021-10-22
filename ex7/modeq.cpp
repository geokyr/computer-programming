#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if(a % 42 == b % 42 && a % 42 == c % 42) {
    printf("%d\n", a % 42);
  }
  else {
    printf("no\n");
  }
}