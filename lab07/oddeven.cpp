#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int n, a[1000000], i, j, even, odd, max;
  even = 0;
  odd = 0;
  max = 0;
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  for(i=0; i<n; i++) {
    odd = 0;
    even = 0;
    for(j=i; j<n; j++) {
      if(a[j] % 2 == 0) {
        even++;
      }
      else {
        odd++;
      }
      if(even == odd && odd + even > max) {
        max = odd + even;
      }
    }
  }
  printf("%d\n", max);
}