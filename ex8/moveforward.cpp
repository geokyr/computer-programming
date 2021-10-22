#include <iostream>
using namespace std;

struct node {
  int info;
  node *next;
};

typedef struct node *nodeptr;

class list {
  public:
    list();
    bool empty();
    int size();
    void add(int k, int x);
    int get(int k);
    void remove(int k);
    int searchMF(int x);
  private:
    nodeptr head;
};

list::list() {
  head = nullptr;
}

bool list::empty() {
  return (head == nullptr);
}

int list::size() {
  node *p = head;
  int s = 1;
  if (head == nullptr) {
    return 0;
  }
  while(p->next != nullptr) {
    p = p->next;
    s++;
  }
  return s;
}

void list::add(int k, int x) {
  node *p;
  if(head == nullptr) {
    p = new node;
    head = p;
    p->info = x;
    p->next = nullptr;
  }
  else {
    p = head;
    if(k == 1) {
      node *q = new node;
      q->info = x;
      q->next = p;
      head = q;
    }
    else {
      while(--k > 1) {
        p = p->next;
      }
      node *q = new node;
      q->info = x;
      q->next = p->next;
      p->next = q;
    }
  }
}

int list::get(int k) {
  node *p = head;
  while(--k > 0) {
    p = p->next;
  }
  return p->info;
}

void list::remove(int k) {
  node *p = head;
  if(k == 1) {
    head = p->next;
    delete p;
  }
  else {
    while(--k > 1) {
      p = p->next;
    }
    node *q = p;
    p = q->next;
    q->next = p->next;
    delete p;
  }
}

int list::searchMF (int x) {
  node *p;
  int t = 0;
  for(p = head; p != nullptr; p = p->next) {
    t++;
    if(p->info == x) {
      break;
    }
  }
  if(p == nullptr) {
    return 0;
  }
  if (t == 1) {
    return 1;
  }
  else {
    node *q = head;
    for(int i=2; i<t; i++) {
      q = q->next;
    }
    p = head;
    head = q->next;
    q->next = head->next;
   head->next = p;
    return t;
  }
}
int main() {
  std::ios_base::sync_with_stdio(false);
  list l;
  int n, k, x, m, sum = 0;

  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> k;
    cin >> x;
    l.add(k,x);
  }

  cin >> m;
  for(int i=0; i<m; i++) {
    cin >> x;
    sum += l.searchMF(x);
  }
  cout << sum << "\n";
}