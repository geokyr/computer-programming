#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int n, fact, i;
  scanf("%d", &n);
  fact = 1;
  i = 1;
  while(fact <= n) {
    fact = fact * i;
    i++;
  }
  printf("%d\n", (i - 2));
}