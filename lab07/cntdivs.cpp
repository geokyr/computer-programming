#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int gcd(int a, int b) {
  if(b == 0) {
    return a;
  }
  else {
    return gcd(b, a % b);
  }
}
int main() {
  int n, i, j, counter;
  scanf("%d", &n);
  counter = 0;
  for(i=2; i<=n; i++) {
    j = gcd(n, i);
    if(j != 1) {
      counter++;
    }
  }
  printf("%d\n", counter);
}