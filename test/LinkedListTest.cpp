#include <iostream>
#include "../src/LinkedList.h"

using namespace std;

int main() {
  LinkedList* list = new LinkedList();
  list->add(1);
  cout << list->toString() << endl;
}
