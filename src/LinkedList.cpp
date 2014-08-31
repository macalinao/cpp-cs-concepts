#include "LinkedList.h"

LinkedList::LinkedList() {
  head = 0;
}

bool LinkedList::add(int value) {
  Node* node = new Node();
  node->value = value;
  if (head) {
    head->next = node;
  } else {
    head = node;
  }
}

string LinkedList::toString() {
  string ret = "[";

  Node* n = head;
  while (n) {
    ret += n->value;
    n = head->next;
  }

  return ret;
}

