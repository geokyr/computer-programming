#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int a;
  scanf("%d", &a);
  printf("%d\n", ((a % 100) / 10) + (a % 10));
}