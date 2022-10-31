#include <algorithm>
#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int i, j, a[n], b[n], x, min, max, flag;
  for(i=0; i<n; i++){
    cin >> a[i];
  }
  for(i=0; i<n; i++){
    cin >> b[i];
  }
  sort(a, a + n);
  sort(b, b + n);
  flag = 1;
  min = 0;
  max = 0;
  for(i=0; i<n; i++){
    if (a[i] != b[i]){
      flag = 0;
      if (a[i] < b[i]){
        min = a[i];
        break;
      }
      else{
        min = b[i];
        break;
      }
    }
  }
  for(i=(n-1); i>-1; i--){
    if (a[i] != b[i]){
      flag = 0;
      if (a[i] > b[i]){
        max = a[i];
        break;
      }
      else{
        max = b[i];
        break;
      }
    }
  }
  if (flag == 0){
    cout << "no " << min << " " << max << endl;
  }
  else{
    cout << "yes" << endl;
  }
}