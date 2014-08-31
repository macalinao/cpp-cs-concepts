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

