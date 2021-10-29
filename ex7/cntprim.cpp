#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
  int n;
  scanf("%d", &n);
  if (n > 1000) {
    int i, j, counter;
    bool primes[n];
    memset(primes, true, n);
    if(n >= 2) {
      counter = 1;
    }
    else {
      counter = 0;
    }
    for(i=3; i*i<n; i+=2) {
      for(j=3; j*i<n; j+=2) {
        primes[j*i] = false;
      }
    }
    for(i=3; i<n; i+=2) {
      if(primes[i] == true) {
        counter++;
      }
    }
    printf("%d\n", counter);
  }
  else {
    int i, j, counter;
    counter = 0;
    for(i=2; i<=n; i++) {
      bool prime = true;
      for(j=2; j*j<=i; j++) {
        if(i % j == 0) {
          prime = false;
          break;
        }
      }
      if(prime) {
        counter++;
      }
    }
    printf("%d\n", counter);
  }
}

/*
Εκφώνηση
Να γράψετε ένα πρόγραμμα που να διαβάζει ένα φυσικό αριθμό Ν και να εκτυπώνει 
το πλήθος των πρώτων αριθμών που δεν υπερβαίνουν το N.

Δεδομένα εισόδου
Μόνο μία γραμμή που θα περιέχει τον αριθμό Ν. Θεωρήστε δεδομένο ότι το Ν θα είναι 
έγκυρος φυσικός αριθμός και ότι Ν <= 5.000.000.

Δεδομένα εξόδου
Μόνο μία γραμμή που θα περιέχει ακριβώς έναν φυσικό αριθμό: την απάντησή σας.

Περιορισμοί
Αν χρειαστεί, θεωρήστε δεδομένο ότι δε θα υπάρχουν περισσότεροι από 500.000 
πρώτοι αριθμοί που δεν υπερβαίνουν το Ν.

Όριο χρόνου εκτέλεσης: 1 sec.

Παράδειγμα εισόδου
29
Παράδειγμα εξόδου
10
*/