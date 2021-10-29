#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
  int n, m;
  n = 0;
  m = 0;
  scanf("%d %d", &n, &m);
  printf("%d\n", max(n,m));
}

/*
Εκφώνηση
Να γράψετε ένα πρόγραμμα που να διαβάζει δύο φυσικούς αριθμούς και να εκτυπώνει 
τον μεγαλύτερο.

Δεδομένα εισόδου
Μόνο μία γραμμή που θα περιέχει τους αριθμούς Μ και Ν, χωρισμένους με ένα κενό 
διάστημα. Θεωρήστε δεδομένο ότι τα Μ και Ν θα είναι έγκυροι φυσικοί αριθμοί.

Δεδομένα εξόδου
Μόνο μία γραμμή που θα περιέχει ακριβώς έναν αριθμό: τον μεγαλύτερο των Μ και Ν.

Περιορισμοί
Όριο χρόνου εκτέλεσης: 1 sec.

Παράδειγμα εισόδου
99 23
Παράδειγμα εξόδου
99

Παράδειγμα εισόδου 2
0 42
Παράδειγμα εξόδου 2
42

Παράδειγμα εισόδου 3
16 16
Παράδειγμα εξόδου 3
16
*/