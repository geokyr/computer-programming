#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int n, a[2000000], money, i, z, flag;
  scanf("%d", &n);
  money = 0;
  z = 1;
  flag = 1;
  for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
    a[i+n] = a[i];
  }
  for(i=0; i<n; i++) {
    money += a[i];
    while(money >= 0 && z < n) {
      money += a[i+z];
      z++;
    }
    if(money >= 0) {
      break;
    }
    else {
      money = 0;
      z = 1;
    }
    if(i == n-1 && money == 0 && z == 1) {
      flag = 0;
    }
  }
  if(flag == 0) {
    printf("0\n");
  }
  else {
    printf("%d\n", i+1);
  }
}