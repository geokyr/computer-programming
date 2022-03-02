#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int n, a;
  scanf("%d", &n);
  a = (n / 10) % 10;
  printf("%d\n", a);
}