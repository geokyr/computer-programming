#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int n;
  scanf("%d", &n);
  if(((n / 1000) == 0) && ((n / 100) > 0)) {
    printf("yes\n");
  }
  else {
    printf("no\n");
  }
}