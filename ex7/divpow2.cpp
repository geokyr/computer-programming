#include <iostream>
#include <cstdio>
using namespace std;
int main () {
  int a, i, pow, max;
  scanf("%d", &a);
  pow = 1;
  max = 0;
  for(i=1; i<24; i++){
    pow = pow * 2;
    if(a % pow == 0 && a >= pow) {
      max = i;
    }
  }
  printf("%d\n", max);
}