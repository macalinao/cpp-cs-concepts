#include "Node.h"

/**
 * Represents a singly linked list.
 */
class LinkedList {
  public:
    LinkedList();
    ~LinkedList();
    bool add(int value);
    int remove(int index);
  private:
    Node* head;
};
