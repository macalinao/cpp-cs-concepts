#include <iostream>
#include "../src/BinaryTree.h"

using namespace std;

int main() {
  BinaryTree* tree = new BinaryTree();
  tree->insert(24);
  tree->insert(5);
  tree->insert(10);
  tree->insert(100);
  tree->insert(1);
  tree->insert(25);

  cout << "Size should be 6: " << tree->size() << endl;
}
