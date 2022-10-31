include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int a, n, sum;
  scanf("%d", &a);
  n = 0;
  sum = 0;
  while(a > 0) {
    n = a % 10;
    a = a / 10;
    sum += n;
  }
  printf("%d\n", sum);
}