#include "Stack.h"

void Stack::push(int val) {
  if (!top) {
    top = new StackNode(val);
    return;
  }

  StackNode* old = top;
  top = new StackNode(val);
  top->next = old;
}

int Stack::pop() {
  int ret = top->val;
  top = top->next;
  return ret;
}

