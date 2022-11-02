#include "pzhelp"
#include <iostream>
using namespace std;
int main(){
  char a[26];
  int i, j, c;

  for(i=0; i<26; i++){
    cin >> a[i];
  }
  for(i=0; i<26; i++){
    for(j=i+1; j<26; j++){
      if (a[j] == a[i]){
        cout << "error" << endl;
        return 0;
      }
    }
  }
  for(i=0; i<26; i++){
    if (a[i] == '3'){
      cout << "error" << endl;
      return 0;
    }
  }
  SKIP_LINE();
  while (true){
    c = getchar();
    if (c != EOF){
      if ((c<='z') and (c>='A')){
        switch (c){
          case '^': putchar(c); break;
          case 'a': putchar(a[0]); break;
          case 'b': putchar(a[1]); break;
          case 'c': putchar(a[2]); break;
          case 'd': putchar(a[3]); break;
          case 'e': putchar(a[4]); break;
          case 'f': putchar(a[5]); break;
          case 'g': putchar(a[6]); break;
          case 'h': putchar(a[7]); break;
          case 'i': putchar(a[8]); break;
          case 'j': putchar(a[9]); break;
          case 'k': putchar(a[10]); break;
          case 'l': putchar(a[11]); break;
          case 'm': putchar(a[12]); break;
          case 'n': putchar(a[13]); break;
          case 'o': putchar(a[14]); break;
          case 'p': putchar(a[15]); break;
          case 'q': putchar(a[16]); break;
          case 'r': putchar(a[17]); break;
          case 's': putchar(a[18]); break;
          case 't': putchar(a[19]); break;
          case 'u': putchar(a[20]); break;
          case 'v': putchar(a[21]); break;
          case 'w': putchar(a[22]); break;
          case 'x': putchar(a[23]); break;
          case 'y': putchar(a[24]); break;
          case 'z': putchar(a[25]); break;
          case 'A': putchar(a[0]-32); break;
          case 'B': putchar(a[1]-32); break;
          case 'C': putchar(a[2]-32); break;
          case 'D': putchar(a[3]-32); break;
          case 'E': putchar(a[4]-32); break;
          case 'F': putchar(a[5]-32); break;
          case 'G': putchar(a[6]-32); break;
          case 'H': putchar(a[7]-32); break;
          case 'I': putchar(a[8]-32); break;
          case 'J': putchar(a[9]-32); break;
          case 'K': putchar(a[10]-32); break;
          case 'L': putchar(a[11]-32); break;
          case 'M': putchar(a[12]-32); break;
          case 'N': putchar(a[13]-32); break;
          case 'O': putchar(a[14]-32); break;
          case 'P': putchar(a[15]-32); break;
          case 'Q': putchar(a[16]-32); break;
          case 'R': putchar(a[17]-32); break;
          case 'S': putchar(a[18]-32); break;
          case 'T': putchar(a[19]-32); break;
          case 'U': putchar(a[20]-32); break;
          case 'V': putchar(a[21]-32); break;
          case 'W': putchar(a[22]-32); break;
          case 'X': putchar(a[23]-32); break;
          case 'Y': putchar(a[24]-32); break;
          case 'Z': putchar(a[25]-32); break;
        }
      }
      else{
        putchar(c);
      }
    }
    else{
      break;
    }
  }
  return 0;
}