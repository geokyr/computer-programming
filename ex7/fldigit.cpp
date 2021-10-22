#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  if(a / 100000 == b && a % 10 == b) {
    printf("yes\n");
  }
  else {
    printf("no\n");
  }
}