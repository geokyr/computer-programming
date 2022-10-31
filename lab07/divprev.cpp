#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int n, a[3000000], i, flag, j, num;
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  num = a[0];
  flag = 0;
  for(i=1; i<n; i++) {
    for(j=i-1; j>=0; j--) {
      if(a[j] % a[i] != 0) {
        break;
      }
      if(j == 0 && a[i] < num) {
        num = a[i];
        flag = 1;
      }
    }
  }
  if(flag == 0) {
    printf("%d\n", a[0]);
  }
  else {
    printf("%d\n", num);
  }
}