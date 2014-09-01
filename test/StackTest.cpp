#include <iostream>
#include "../src/Stack.h"

using namespace std;

int main() {
  Stack* stack = new Stack();
  stack->push(4);
  stack->push(10);
  stack->pop();
  stack->push(20);
  stack->push(100);

  int a = stack->pop();
  int b = stack->pop();
  int c = stack->pop();

  cout << "This should be 100 20 4: " << a << " " << b << " " << c << endl;
}
