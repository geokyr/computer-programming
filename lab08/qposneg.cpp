#include <iostream>
using namespace std;

struct node {
  int info;
  node *next;
};

typedef struct node *nodeptr;

class queue {
  public:
    queue();
    bool empty();
    void enqueue(int x);
    int dequeue();
    int peek();
  private:
    nodeptr front, rear;
};

queue::queue() {
  front = nullptr;
  rear = nullptr;
}

bool queue::empty() {
  return (front == nullptr);
}

void queue::enqueue(int x) {
  node *p = new node;
  p->info = x;
  p->next = nullptr;
  if(front == nullptr) {
    front = p;
  }
  else {
    rear->next = p;
  }
  rear = p;
}

int queue::dequeue() {
  int data = front->info;
  node *p = front;
  if(front == rear) {
    rear = nullptr;
  }
  front = front->next;
  delete p;
  return data;
}

int queue::peek() {
  return front->info;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  queue pos, neg;
  int n, cp, cn;
  cp = cn = 0;

  while(cin >> n) {
    if(n > 0) {
      pos.enqueue(n);
      cp++;
    }
    else {
      neg.enqueue(-n);
      cn++;
    }
  }

  if(cp != cn) {
    cout << "no\n";
    return 0;
  }

  while(!pos.empty() and !neg.empty()) {
    if (pos.dequeue() != neg.dequeue()) {
      cout <<"no\n";
      return 0;
    }
  }
  cout << "yes\n";
}