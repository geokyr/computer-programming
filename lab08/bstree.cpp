#include <iostream>
using namespace std;

int mx(int a, int b) {
  if(a > b) {
    return a;
  }
  else {
    return b;
  }
}

struct node {
  int info;
  node *right, *left;
};

typedef struct node *tree;

int height(tree t) {
  if(t == nullptr) {
    return 0;
  }
  return 1 + mx(height(t->left), height(t->right));
}

tree insert(int x, tree t) {
  if(t == nullptr) {
    tree p = new node;
    p->info = x;
    p->left = p->right = nullptr;
    return p;
  }
  else if(t->info > x) {
    t->left = insert(x, t->left);
  }
  else if(t->info < x) {
    t->right = insert(x, t->right);
  }
  return t;
}

int search(int x, tree t) {
  tree p = t;
  int counter = 1, flag = 1;
  if(p == nullptr) {
    return 0;
  }
  while(p->info != x && flag == 1) {
    flag = 0;
    if(x < p->info && p->left != nullptr) {
      p = p->left;
      counter++;
      flag = 1;
    }
    else if(x > p->info && p->right != nullptr) {
      p = p->right;
      counter++;
      flag = 1;
    }
  }
  if((x < p->info && p->left == nullptr) or (x > p->info && p->right == nullptr)) {
    return 0;
  }
  else return counter;
}

int min(tree t) {
  node *p = t;
  while(p->left != nullptr) {
    p = p->left;
  }
  return p->info;
}

int max(tree t) {
  node *p = t;
  while(p->right != nullptr) {
    p = p->right;
  }
  return p->info;
}

void inorder(tree t) {
  if(t == nullptr) {
    return;
  }
  else {
    inorder(t->left);
    cout << t->info << " ";
    inorder(t->right);
  }
}

void preorder(tree t) {
  if(t == nullptr) {
    return;
  }
  else {
    cout << t->info << " ";
    preorder(t->left);
    preorder(t->right);
  }
}

void postorder(tree t) {
  if(t == nullptr) {
    return;
  }
  else {
    postorder(t->left);
    postorder(t->right);
    cout << t->info << " ";
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  tree t = nullptr;
  int n, x, m, y;

  cin >> n;
  cin >> x;
  t = insert(x, t);
  for(int i=0; i<n-1; i++) {
    cin >> x;
    insert(x, t);
  }

  cout << height(t) << endl;
  cout << min(t) << " " << max(t) << endl;

  cin >> m;
  for(int i=0; i<m-1; i++) {
    cin >> y;
    cout << search(y, t) << " ";
  }
  cin >> y;
  cout << search(y, t) << endl;

  inorder(t);
  cout << "end" << endl;

  preorder(t);
  cout << "end" << endl;

  postorder(t);
  cout << "end" << endl;
}