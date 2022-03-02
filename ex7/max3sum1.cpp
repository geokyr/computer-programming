#include <iostream>
#include <cstdio>
using namespace std;
int a[1000000], b[1000000], c[1000000];
int main() {
  int n, i;
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  for(i=0; i<n; i++) {
    scanf("%d", &b[i]);
  }
  for(i=0; i<n; i++) {
    scanf("%d", &c[i]);
  }
  int j, k, max;
  max = 0;
  for(i=0; i<n; i++) {
    for(j=i+1; j<n; j++) {
      for(k=j+1; k<n; k++) {
        if(a[i] + b[j] + c[k] > max) {
          max = a[i] + b[j] + c[k];
        }
      }
    }
  }
  printf("%d\n", max);
}