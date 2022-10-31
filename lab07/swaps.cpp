#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int n, a[100000], first, last, i, swaps, counter;
  swaps = 0;
  counter = 0;
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  for(i=0; i<n; i++) {
    if(a[i] < 0) {
      first = a[i];
      break;
    }
  }
  for(i=n-1; i>=0; i--) {
    if(a[i] > 0) {
      last = a[i];
      break;
    }
  }
  for(i=0; i<n; i++) {
    if(a[i] < 0) {
      swaps += i - counter;
      counter++;
    }
  }
  printf("%d\n%d\n%d\n", swaps, first, last);
}