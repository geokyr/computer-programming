#include "pzhelp"
#include <iostream>
#include <cstring>
using namespace std;

int main(){

  char s[100];
  int i, j, n, l, test;
  REAL p;

  cin >> n;
  SKIP_LINE();
  p = 0;

  for(j=0; j<n; j++) {
    cin.getline(s, 100);
    l = strlen(s);
    test = 1;
    if (l == 0){
      cout << "empty" << endl;
    }
    else {
      if (l > 20){
        cout << "error" << endl;
      }
      else{
        for(i=0; i<(l/2); i++){
          if(test == 1){
            if(s[i] != s[l-i-1]){
              test = 0;
            }
          }
          else{
            break;
          }
        }
        if(test == 1){
          cout << "yes" << endl;
          p = p + 1;
        }
        else{
          cout << "no" << endl;
        }
      }
    }
  }
  WRITELN(FORM((100*p / n), 0, 3));
}