// IF YOU TOUCH ANYTHING OUTSIDE THE LINES MARKED WITH "(snip)"
// THEN YOU'D BETTER KNOW WHAT YOU'RE DOING!  YOUR CODE MAY NOT
// COMPILE.  YOU HAVE BEEN WARNED!

#ifndef CONTEST
#include <iostream>
#include <cmath>

using namespace std;

struct list_node {
  int data;
  list_node *next;
};

struct tree_node {
  int data;
  tree_node *left, *right;
};

#endif

// YOUR SOLUTION GOES HERE -- YOU DON'T NEED TO ERASE THE REST
// -----------------------------------------------------------
// MAKE SURE THAT YOUR SUBMISSION COMPILES, OTHERWISE YOU WILL
// GET ZERO POINTS TODAY AND THAT WILL BE A PITY!
// ------------------------(snip)-----------------------------

int list_length(list_node *l) {
  if(l == nullptr) {
    return 0;
  }
  else {
    list_node* temp = l;
    int i = 1;
    while(temp->next != nullptr) {
      i++;
      temp = temp->next;
    }
    return i;
  }
  //return 4;  // this is obviously wrong!
}

int list_minimum(list_node *l) {
  if(l == nullptr) {
    return 0;
  }
  else {
    int ans = l->data;
    list_node* temp = l;
    while(temp->next != nullptr) {
      temp = temp->next;
      if(temp->data < ans) {
        ans = temp->data;
      }
    }
    return ans;
  }
  //return 17;  // this is obviously wrong!
}

int list_middle(list_node *n) {
  if(n == nullptr) {
    return 0;
  }
  int k = list_length(n);
  list_node* temp = n;
  for(int i=0; i<k/2; i++) {
    temp = temp->next;
  }
  return temp->data;
  //return 69;  // this is obviously wrong!
}

int tree_size(tree_node *t) {
  if(t == nullptr) {
    return 0;
  }
  return(1 + tree_size(t->left) + tree_size(t->right));
  //return 8;  // this is obviously wrong!
}

int tree_sum_of_leaves(tree_node *t) {
  if(t == nullptr) {
    return 0;
  }
  if(t->left == nullptr && t->right == nullptr) {
    return t->data;
  }
  else {
    return tree_sum_of_leaves(t->left) + tree_sum_of_leaves(t->right);
  }
  //return 173;  // this is obviously wrong!
}

int tree_room_high(tree_node *t, int k) {
  if(t == nullptr) {
    return pow(2, k)-1;
  }
  if(k == 0) {
    return 0;
  }
  else {
    return (tree_room_high(t->left, k-1) + tree_room_high(t->right, k-1));
  }
  //return 1;  // this is obviously wrong!
}

// ------------------------(snip)-----------------------------
// YOUR SOLUTION ENDS HERE -- YOU DON'T NEED TO ERASE THE REST

#ifndef CONTEST

list_node * list(int x, list_node *next) {
  list_node *n = new list_node;
  n->data = x;
  n->next = next;
  return n;
}

tree_node * tree(int x, tree_node *left, tree_node *right) {
  tree_node *n = new tree_node;
  n->data = x;
  n->left = left;
  n->right = right;
  return n;
}

int main() {
  list_node *l = list(42, list(17, list(69, list(37, nullptr))));
  cout << "l = 42 -> 17 -> 69 -> 37" << endl;
  cout << "list_length(l) = " << list_length(l) << endl;
  cout << "list_minimum(l) = " << list_minimum(l) << endl;
  cout << "list_middle(l) = " << list_middle(l) << endl << endl;

  tree_node *t = tree(42,
                      tree(17,
                           tree(22, nullptr, tree(6, nullptr, nullptr)),
                           tree(4, nullptr, tree(78, nullptr, nullptr))),
                      tree(37,
                           nullptr,
                           tree(89, nullptr, nullptr)));
  cout << "t =    42" << endl;
  cout << "      /  \\" << endl;
  cout << "    17    37" << endl;
  cout << "   /  \\    \\" << endl;
  cout << " 22    4    89" << endl;
  cout << "   \\    \\" << endl;
  cout << "    6    78" << endl;
  cout << "tree_size(t) = " << tree_size(t) << endl;
  cout << "tree_sum_of_leaves(t) = " << tree_sum_of_leaves(t) << endl;
  cout << "tree_room_high(t, 3) = " << tree_room_high(t, 3) << endl;
}

#endif