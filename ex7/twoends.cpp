#include <iostream>
using namespace std;
int main() {
  int i, a[10000000], n, left, right, leftsum, rightsum, sum;
  std::ios::sync_with_stdio(false);
  std::ios_base::sync_with_stdio(false);
  cin >> n;
  left = -1;
  right = n;
  leftsum = 0;
  rightsum = 0;
  sum = 0;
  for(i=0; i<n; i++) {
   cin >> a[i];
  }
  while(left < right) {
    if(leftsum == rightsum) {
      sum = rightsum;
      left++;
      right--;
      rightsum += a[right];
      leftsum += a[left];
    }
    else if (leftsum > rightsum) {
      right--;
      rightsum += a[right];
    }
    else {
      left++;
      leftsum += a[left];
    }
  }
  cout << sum << "\n";
}