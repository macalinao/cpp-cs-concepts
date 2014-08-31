#include <iostream>
#include "../src/LinkedList.h"

using namespace std;

int main() {
  LinkedList* list = new LinkedList();
  list->add(1);
  list->add(13);
  list->add(3);
  cout << list->toString() << endl;
}
