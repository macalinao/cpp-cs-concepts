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
  bool invalid = list->remove(3);
  cout << "This should be false: " << invalid << endl;
  cout << list->toString() << endl;

  // Test valid removal 
  bool valid = list->remove(1);
  cout << "This should be true: " << valid << endl;
  cout << list->toString() << endl;
}
