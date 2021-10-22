#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int n, m, counter;
  scanf("%d %d", &n, &m);
  counter = 0;
  if(n % 2 == 0) {
    counter++;
  }
  if(m % 2 == 0) {
    counter++;
  }
  printf("%d\n", counter);
}