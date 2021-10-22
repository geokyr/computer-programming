#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  if(((n + m) % 100) == 42) {
    printf("yes\n");
  }
  else {
    printf("no\n");
  }
}