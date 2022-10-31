#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int a, b, c;
  scanf("%d %d", &a, &b);
  c = a * b;
  if((c % 1000) / 10 < 10) {
    printf("0%d\n", (c % 1000) / 10);
  }
  else {
    printf("%d\n", (c % 1000) / 10);
  }
}