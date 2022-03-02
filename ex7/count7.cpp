#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int a, counter;
  scanf("%d", &a);
  counter = 0;
  if(a / 10 == 7) {
    counter++;
  }
  if(a % 10 == 7) {
    counter++;
  }
  printf("%d\n", counter);
}