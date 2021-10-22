#include <iostream>
using namespace std;
int main(){
  int n, m, x, a[150][150], b[22500], flag, s, t, z, i, j;

  cin >> n;
  m = (n*n - 1);
  z = 0;
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      cin >> a[i][j];
    }
  }
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      b[z] = a[i][j];
      z++;
    }
  }
  s = 0;
  for(i=0; i<n; i++){
    s += a[i][0];
  }
  flag = 1;
  t = 0;
  if (flag == 1){
    for(i=0; i<n; i++){
      for(j=0; j<n; j++){
        t += a[i][j];
      }
      if (t != s){
        flag = 0;
      }
      t = 0;
    }
  }
  t = 0;
  if (flag == 1){
    for(j=0; j<n; j++){
      for(i=0; i<n; i++){
        t += a[i][j];
      }
      if (t != s){
        flag = 0;
      }
      t = 0;
    }
  }
  t = 0;
  if (flag == 1){
    for(i=0; i<n; i++){
      t += a[i][i];
    }
    if (t != s){
      flag = 0;
    }
    t = 0;
  }
  t = 0;
  if (flag == 1){
    for(i=0; i<n; i++){
      t += a[i][n-1-i];
    }
    if (t != s){
      flag = 0;
    }
  }
  if (flag == 1){
    for(i=1; i<(m+1); i++){
      x = b[i];
      j = i;
      while (j>0 and b[j-1]>x){
        b[j] = b[j-1];
        j = j - 1;
      }
      b[j] = x;
    }
  }
  if (flag == 1){
    for(i=0; i<m; i++){
      if (b[i] != i){
        flag = 0;
      }
    }
  }
  if (flag == 0){
    cout << "no" << endl;
  }
  else{
    cout << "yes" << endl;
  }
}