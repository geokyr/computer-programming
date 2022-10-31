#include <iostream>
using namespace std;

bool found[5000001];

int main() {
  int N;
  cin >> N;
  for(int i=0; i<=N; i++)
    found[i] = false;
  int p2[23], p3[15], p5[10];
  p2[0] = p3[0] = p5[0] = 1;
  for(int i=1; i<=22; i++)
    p2[i] = 2*p2[i-1];
  for(int i=1; i<=14; i++)
    p3[i] = 3*p3[i-1];
  for(int i=1; i<=9; i++)
    p5[i] = 5*p5[i-1];
  int result = 0;
  for(int i=0; i<=22; i++)
    for(int j=0; j<=14; j++)
      for(int k=0; k<=9; k++) {
        int t = p2[i] + p3[j] + p5[k];
        if (t<=N && !found[t]) {
          result++;
          found[t] = true;
        }
      }
  cout << result << endl;
}