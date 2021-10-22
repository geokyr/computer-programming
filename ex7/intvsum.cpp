#include <iostream>
using namespace std;
int main() {
  std::ios::sync_with_stdio(false);
  int n, a[100000], i, j, sum, max;
  cin >> n;
  for(i=0; i<n; i++) {
    cin >> a[i];
  }
  sum = 0;
  max = 0;
  for(i=0; i<n-3; i++) {
    for(j=i+2; j<n; j++) {
      sum += a[j-1];
      if(a[i] + a[j] == sum && j > max) {
        max = j + 1;
      }
    }
    sum = 0;
  }
  cout << max << "\n";
}