#include <iostream>
#include <string>
using namespace std;
int main() {

  int i, number, start, finish, counter, chars, current, empty, gaps, blanksize, bonusgaps;
  string words[10000];

  for(i=0; i<10000; i++) {
    cin >> words[i];
  }

  i=0;
  while(words[i] != "") {
    i++;
  }
  number = i;
  start = 0;
  finish = -1;
  counter = 0;
  chars = -1;
  current = 0;

  while(current < number) {
    while((chars + words[current].length() + 1) <= 60) {
      chars += (words[current].length() + 1);
      counter++;
      current++;
    }
    current--;

    if(chars == 60) {
      finish += counter;
      for(i=start; i<finish; i++) {
        if(i != (number - 1)) {
          cout << words[i] << ' ';
        }
        else {
          cout << words[number - 1];
          break;
        }
      }
      cout << words[finish] << endl;
      start = (finish + 1);
    }

    else {
      chars -= (counter - 1);
      empty = (60 - chars);
      gaps = (counter - 1);
      blanksize = (empty / gaps);
      bonusgaps = (empty % gaps);

      if (bonusgaps == 0) {
        finish += counter;
        for(i=start; i<finish; i++) {
          cout << words[i] << string(blanksize, ' ');
        }
        cout << words[finish] << endl;
        start = (finish + 1);
      }

      else {
        finish += counter;
        for(i=start; i<finish; i++) {
          if(i<(finish - bonusgaps)) {
            cout << words[i] << string(blanksize, ' ');
          }
          else {
            cout << words[i] << string((blanksize + 1), ' ');
          }
        }
        cout << words[finish] << endl;
        start = (finish + 1);
      }

    }

    current++;
    chars = -1;
    counter = 0;

  }
}