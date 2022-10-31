// IF YOU TOUCH ANYTHING OUTSIDE THE LINES MARKED WITH "(snip)"
// THEN YOU'D BETTER KNOW WHAT YOU'RE DOING!  YOUR CODE MAY NOT
// COMPILE.  YOU HAVE BEEN WARNED!

#ifndef CONTEST
#include <iostream>

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

int list_sum(list_node *l) {
  return 165;  // this is obviously wrong!
}

int list_maximum(list_node *l) {
  return 69;  // this is obviously wrong!
}

bool list_is_ascending(list_node *l) {
  return false;  // this is obviously wrong!
}

int tree_count_leaves(tree_node *t) {
  return 3;  // this is obviously wrong!
}

int tree_maximum(tree_node *t) {
  return 89;  // this is obviously wrong!
}

int tree_available(tree_node *t) {
  return 7;  // this is obviously wrong!
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
  cout << "list_sum(l) = " << list_sum(l) << endl;
  cout << "list_maximum(l) = " << list_maximum(l) << endl;
  cout << "list_is_ascending(l) = "
       << (list_is_ascending(l) ? "true" : "false") << endl << endl;

  tree_node *t = tree(42,
                      tree(17,
                           tree(12, nullptr, tree(16, nullptr, nullptr)),
                           tree(34, nullptr, tree(38, nullptr, nullptr))),
                      tree(57,
                           nullptr,
                           tree(89, nullptr, nullptr)));
  cout << "t =    42" << endl;
  cout << "      /  \\" << endl;
  cout << "    17    57" << endl;
  cout << "   /  \\    \\" << endl;
  cout << " 12    34   89" << endl;
  cout << "   \\    \\" << endl;
  cout << "    16   38" << endl;
  cout << "tree_count_leaves(t) = " << tree_count_leaves(t) << endl;
  cout << "tree_maximum(t) = " << tree_maximum(t) << endl;
  cout << "tree_available(t) = " << tree_available(t) << endl;
}

#endif