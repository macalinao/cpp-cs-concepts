#include <string>
#include "Node.h"

using namespace std;

/**
 * Represents a singly linked list.
 */
class LinkedList {
  public:
    LinkedList();
    ~LinkedList();
    void add(int value);
    bool remove(int index);
    string toString();
  private:
    Node* head;
};
