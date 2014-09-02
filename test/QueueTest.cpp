#include <iostream>
#include "../src/Queue.h"

using namespace std;

int main() {
  Queue* queue = new Queue();
  queue->push(4);
  queue->push(10);
  queue->push(20);

  int a = queue->pop();
  int b = queue->pop();
  int c = queue->pop();
  int d = queue->pop();

  cout << "Should be 4 10 20 -1: " << a << " " << b << " " << c << " " << d << endl;
}
