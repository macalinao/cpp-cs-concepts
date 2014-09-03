#include <iostream>
#include "../src/Vector.h"

using namespace std;

int main() {
  Vector* v = new Vector();
  for (int i = 0; i <= 16; i++) {
    v->add(i);
  }

  cout << "This should be numbers from 0-16: ";
  for (int i = 0; i < v->size; i++) {
    cout << (*v)[i] << " ";
  }
  cout << endl;
  cout << "This should be 32: " << v->getCapacity() << endl;
  cout << "This should be 17: " << v->size << endl;
  v->remove(10);
  cout << "This should be 11: " << (*v)[10] << endl;
  cout << "This should be 16: " << v->size << endl;
}
