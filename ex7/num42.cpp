#include <iostream>
using namespace std;
int main() {
  std::ios_base::sync_with_stdio(false);
  std::ios::sync_with_stdio(false);
  int n, a, b;
  cin >> n;
  a = (n % 1000) / 100;
  b = (n % 100000) / 10000;
  cout << a << b << "\n";
}