#include "Queue.h"

void Queue::push(int val) {
  if (!front) {
    front = new QueueNode(val);
    return;
  }
  QueueNode* next = front;
  front = new QueueNode(val);
  front->next = next;
}

int Queue::pop() {
  if (!front) {
    return -1; // prevent segfault
  }

  QueueNode* penult = 0;
  QueueNode* last = front;
  while (last->next) {
    penult = last;
    last = last->next;
  }
  
  if (penult) {
    penult->next = 0;
  } else {
    front = 0;
  }

  return last->val;
}
