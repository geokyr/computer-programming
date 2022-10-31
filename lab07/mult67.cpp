#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int n;
  scanf("%d", &n);
  if(((n % 7) == 0) && ((n % 6) != 0)) {
    printf("yes\n");
  }
  else {
    printf("no\n");
  }
}