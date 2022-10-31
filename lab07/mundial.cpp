#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int a;
  scanf("%d", &a);
  if(a % 4 == 2 && a >= 1930 && a != 1942 && a != 1946) {
    printf("yes\n");
  }
  else {
    printf("no\n");
  }
}