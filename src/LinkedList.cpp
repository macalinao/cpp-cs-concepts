#include "LinkedList.h"
#include <iomanip>
#include <locale>
#include <sstream>

LinkedList::LinkedList() {
  head = 0;
}

bool LinkedList::add(int value) {
  Node* node = new Node();
  node->value = value;

  if (head) {
    Node* tail = head;
    while(tail->next) {
      tail = tail->next;
    }
    tail->next = node;
  } else {
    head = node;
  }
}

string LinkedList::toString() {
  string ret = "[";

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

