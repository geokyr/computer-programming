#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main() {
  string a;
  cin >> a;
  if(a.length() % 2 == 0) {
    printf("yes\n");
  }
  else {
    printf("no\n");
  }
}

/*
Εκφώνηση
Γράψτε ένα πρόγραμμα που να διαβάζει ένα φυσικό αριθμό και να βρίσκει αν αυτός 
έχει άρτιο (ζυγό) πλήθος ψηφίων.

Δεδομένα εισόδου
Μόνο μία γραμμή που θα περιέχει τον αριθμό N. Θεωρήστε δεδομένο ότι θα είναι 
έγκυρος φυσικός αριθμός μεταξύ των ορίων που αναφέρονται παρακάτω.

Δεδομένα εξόδου
Μόνο μία γραμμή που θα περιέχει τη λέξη "yes", αν ο αριθμός Ν έχει άρτιο πλήθος 
ψηφίων, διαφορετικά τη λέξη "no".

Περιορισμοί
0 <= Ν < 100000
Όριο χρόνου εκτέλεσης: 1 sec.
Όριο μνήμης: 16 MB.

Παράδειγμα εισόδου
42
Παράδειγμα εξόδου
yes

Παράδειγμα εισόδου 2
31313
Παράδειγμα εξόδου 2
no
*/