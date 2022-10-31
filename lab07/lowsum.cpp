#include <iostream>
#include <climits>
using namespace std;
int main() {
  std::ios::sync_with_stdio(false);
  int n, i, a[1000000], x, left, right, sum, closest, closest_sum;
  cin >> n;
  for(i=0; i<n; i++) {
    cin >> a[i];
  }
  x = 0;
  left = 0;
  right = n - 1;
  sum = 0;
  closest = INT_MAX;
  while(left < right) {
    sum = a[left] + a[right];
    if(abs(x-sum) < closest) {
      closest = abs(x-sum);
      closest_sum = sum;
      }
    if(sum > x) {
      right--;
    }
    else if(sum <= x) {
      left++;
    }
  }
  cout << closest_sum << "\n";
}