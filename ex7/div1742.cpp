#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  if((a % 42 == 0 && b % 17 == 0) || (a % 17 == 0 && b % 42 == 0)) {
    printf("yes\n");
  }
  else {
    printf("no\n");
  }
}