#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
  int n, m;
  n = 0;
  m = 0;
  scanf("%d %d", &n, &m);
  printf("%d\n", max(n,m));
}