#include "pzhelp"
#include <iostream>
using namespace std;
int main(){
  char a[26], b[27] = "abcdefghijklmnopqrstuvwxyz", l;
  int i, j, z, c, flag, d[26];

  z=0;
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
    if (a[i] == '4'){
      cout << "error" << endl;
      return 0;
    }
  }
  SKIP_LINE();
  c = getchar();
  if (c == 'd'){
    flag = 2;
  }
  else{
    flag = 1;
  }
  SKIP_LINE();
  if (flag == 1){
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
  }
  if (flag == 2){
    for(l = 'a'; l <= 'z'; l++){
      for(i=0; i<26; i++){
        if (l == a[i]){
          d[z] = i;
          z++;
        }
      }
    }
    while (true){
      c = getchar();
      if (c != EOF){
        if ((c<='z') and (c>='A')){
          switch (c){
            case '[': putchar(c); break;
            case ']': putchar(c); break;
            case '^': putchar(c); break;
            case 'a': putchar(b[d[0]]); break;
            case 'b': putchar(b[d[1]]); break;
            case 'c': putchar(b[d[2]]); break;
            case 'd': putchar(b[d[3]]); break;
            case 'e': putchar(b[d[4]]); break;
            case 'f': putchar(b[d[5]]); break;
            case 'g': putchar(b[d[6]]); break;
            case 'h': putchar(b[d[7]]); break;
            case 'i': putchar(b[d[8]]); break;
            case 'j': putchar(b[d[9]]); break;
            case 'k': putchar(b[d[10]]); break;
            case 'l': putchar(b[d[11]]); break;
            case 'm': putchar(b[d[12]]); break;
            case 'n': putchar(b[d[13]]); break;
            case 'o': putchar(b[d[14]]); break;
            case 'p': putchar(b[d[15]]); break;
            case 'q': putchar(b[d[16]]); break;
            case 'r': putchar(b[d[17]]); break;
            case 's': putchar(b[d[18]]); break;
            case 't': putchar(b[d[19]]); break;
            case 'u': putchar(b[d[20]]); break;
            case 'v': putchar(b[d[21]]); break;
            case 'w': putchar(b[d[22]]); break;
            case 'x': putchar(b[d[23]]); break;
            case 'y': putchar(b[d[24]]); break;
            case 'z': putchar(b[d[25]]); break;
            case 'A': putchar(b[d[0]]-32); break;
            case 'B': putchar(b[d[1]]-32); break;
            case 'C': putchar(b[d[2]]-32); break;
            case 'D': putchar(b[d[3]]-32); break;
            case 'E': putchar(b[d[4]]-32); break;
            case 'F': putchar(b[d[5]]-32); break;
            case 'G': putchar(b[d[6]]-32); break;
            case 'H': putchar(b[d[7]]-32); break;
            case 'I': putchar(b[d[8]]-32); break;
            case 'J': putchar(b[d[9]]-32); break;
            case 'K': putchar(b[d[10]]-32); break;
            case 'L': putchar(b[d[11]]-32); break;
            case 'M': putchar(b[d[12]]-32); break;
            case 'N': putchar(b[d[13]]-32); break;
            case 'O': putchar(b[d[14]]-32); break;
            case 'P': putchar(b[d[15]]-32); break;
            case 'Q': putchar(b[d[16]]-32); break;
            case 'R': putchar(b[d[17]]-32); break;
            case 'S': putchar(b[d[18]]-32); break;
            case 'T': putchar(b[d[19]]-32); break;
            case 'U': putchar(b[d[20]]-32); break;
            case 'V': putchar(b[d[21]]-32); break;
            case 'W': putchar(b[d[22]]-32); break;
            case 'X': putchar(b[d[23]]-32); break;
            case 'Y': putchar(b[d[24]]-32); break;
            case 'Z': putchar(b[d[25]]-32); break;
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
  }
}