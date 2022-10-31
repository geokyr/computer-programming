#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
  int n, x, a[1000000], i, max, j, counter;
  scanf("%d %d", &n, &x);
  for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  max = n;
  counter = 0;
  sort(a, a + n);
  for(i=0; i<n; i++) {
    if(a[0] + a[i] > x) {
      max = i;
      break;
    }
  }
  for(i=0; i<max; i++) {
    for(j=i+1; j<max; j++) {
      if(a[i] + a[j] == x) {
        counter++;
      }
    }
  }
  printf("%d\n", counter);
}