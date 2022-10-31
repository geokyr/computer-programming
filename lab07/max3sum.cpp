#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int a[1000000], b[1000000], c[1000000];
int ac[1000000], bc[1000000], cc[1000000];
int main() {
  int n, i, z;
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  for(i=0; i<n; i++) {
    scanf("%d", &b[i]);
  }
  for(i=0; i<n; i++) {
    scanf("%d", &c[i]);
  }
  for(i=0; i<n; i++) {
    ac[z] = a[i];
    bc[z] = b[i];
    cc[z] = c[i];
    z++;
  }
  int j, k, r;
  int pos1, pos2, pos3;
  sort(ac, ac + n);
  sort(bc, bc + n);
  sort(cc, cc + n);
  for(i=0; i<n; i++) {
    if(ac[n-1] == a[i]) {
      pos1 = i;
    }
    if(bc[n-1] == b[i]) {
      pos2 = i;
    }
    if(cc[n-1] == c[i]) {
      pos3 = i;
    }
  }
  if(pos1 < pos2 && pos2 < pos3) {
    printf("%d", ac[n-1] + bc[n-1] + cc[n-1]);
  }
  else {
    while(pos1 > pos2 || pos1 > pos3 || pos2 > pos3) {
      while(pos1 > pos2 || pos1 > pos3) {
        for(j=2; j<=n; j++) {
        for(i=0; i<n; i++) {
          if(ac[n-j] == a[i]) {
            pos1 = i;
          }
        }
      }
      }
      while(pos2 > pos3) {
        for(k=2; k<=n; k++) {
        for(r=0; r<n; r++) {
          if(bc[n-k] == b[r]) {
            pos2 = r;
          }
        }
      }
    }
    }
    printf("%d", ac[n-j] + bc[n-k] + cc[n-1]);
  }
}