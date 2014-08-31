#include <iostream>
#include "../src/LinkedList.h"

using namespace std;

int main() {
  LinkedList* list = new LinkedList();
  list->add(1);
  list->add(13);
  list->add(3);
  cout << list->toString() << endl << endl;

  // Test invalid removal 
  bool valid = list->remove(3);
  cout << "This should be false: " << valid << endl;
  cout << list->toString() << endl;

  // Test valid removal 
  valid = list->remove(1);
  cout << "This should be true: " << valid << endl;
  cout << list->toString() << endl;

  // Test removal of first
  valid = list->remove(0);
  cout << "This should be true: " << valid << endl;
  cout << list->toString() << endl;

  // Restore
  list = new LinkedList();
  list->add(1);
  list->add(13);
  list->add(3);

  // Test indexOf
  int index = list->indexOf(13);
  cout << "This should be 1: " << index << endl;
  index = list->indexOf(2);
  cout << "This should be -1: " << index << endl;
}
