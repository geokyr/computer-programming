#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  if(a * b >= 1000 && a * b < 10000) {
    printf("yes\n");
  }
  else {
    printf("no\n");
  }
}