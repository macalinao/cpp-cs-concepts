#include "BinaryTree.h"

BinaryTree::BinaryTree() {
  head = 0;
}

/**
 * Helper function for counting the number of nodes a node is composed of
 */
int sizeOfNode(BinaryTreeNode* node) {
  if (!node) {
    return 0;
  }
  int ret = 1;
  ret += sizeOfNode(node->left);
  ret += sizeOfNode(node->right);
  return ret;
}

int BinaryTree::size() {
  return sizeOfNode(head);
}

/**
 * Inserts the given value into a spot in the tree that will
 * maintain a sorted order.
 */
void BinaryTree::insert(int key) {
  if (!head) {
    head = new BinaryTreeNode();
    head->value = key;
    return;
  }

  BinaryTreeNode* node = head;
  for (;;) {
    if (key < node->value) {
      if (!node->left) {
        node->left = new BinaryTreeNode();
        node->left->value = key;
        return;
      }
      node = node->left;
    } else {
      if (!node->right) {
        node->right = new BinaryTreeNode();
        node->right->value = key;
        return;
      }
      node = node->right;
    }
  }
}

/**
 * This just checks to see if the given key is present in the tree.
 * It should be O(log n) due to the tree being sorted.
 * We aren't a red black tree though, so it will have a worst case of O(n)
 */
BinaryTreeNode* BinaryTree::search(int key) {
  BinaryTreeNode* node = head;
  for (;;) {
    if (!node) {
      return 0;
    }

    if (key < node->value) {
      node = node->left;
    } else if (key > node->value) {
      node = node->right;
    } else if (key == node->value) {
      return node;
    }
  }
}
