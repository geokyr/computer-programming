#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int n;
  scanf("%d", &n);
  if(((n*n) % 100) == 24) {
    printf("yes\n");
  }
  else {
    printf("no\n");
  }
}