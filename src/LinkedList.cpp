#include "LinkedList.h"
#include <iomanip>
#include <locale>
#include <sstream>

LinkedList::LinkedList() {
  head = 0;
}

void LinkedList::add(int value) {
  Node* node = new Node();
  node->value = value;

  // Check if head exists
  if (!head) {
    head = node;
    return;
  }

  // Head exists
  Node* tail = head;
  // Find the tail
  while(tail->next) {
    tail = tail->next;
  }
  tail->next = node;
}

bool LinkedList::remove(int index) {
  // Remove first
  if (index == 0) {
    head = head->next;
    return true;
  }

  // Iterate
  Node* prev;
  Node* node = head;
  for (int i = 0; i < index; i++) {
    if (!node->next) {
      return false;
    }
    prev = node;
    node = node->next;
  }

  // Delete old node
  prev->next = node->next;
  delete node;
  return true;
}

int LinkedList::indexOf(int value) {
  Node* node = head;
  // Loop forever
  for (int i = 0;; i++) {
    // Check if value is equal
    if (node->value == value) {
      return i;
    }

    // If we're out, return -1
    if (!node->next) {
      return -1;
    }

    node = node->next;
  }
}

string LinkedList::toString() {
  string ret = "[";

  // Iterate
  Node* n = head;
  while (n) {
    string numStr = static_cast<ostringstream*>( &(ostringstream() << n->value) )->str();
    ret += numStr;
    n = n->next;
    if (n) {
      ret += ", ";
    }
  }

  ret += "]";
  return ret;
}

