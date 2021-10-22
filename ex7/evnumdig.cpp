include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main() {
  string a;
  cin >> a;
  if(a.length() % 2 == 0) {
    printf("yes\n");
  }
  else {
    printf("no\n");
  }
}