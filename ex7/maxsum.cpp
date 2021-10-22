#include <iostream>
#include <climits>
using namespace std;
int main() {
  std::ios::sync_with_stdio(false);
  int n, a[1000000], i, max, maxhere;
  cin >> n;
  for(i=0; i<n; i++) {
    cin >> a[i];
  }
  max = INT_MIN;
  maxhere = 0;
  for(i=0; i<n; i++) {
    maxhere += a[i];
    if(max < maxhere) {
      max = maxhere;
    }
    if(maxhere < 0) {
      maxhere = 0;
    }
  }
  cout << max << "\n";
}