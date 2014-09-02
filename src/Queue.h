struct QueueNode {
  QueueNode(int val): val(val) {}
  int val;
  QueueNode* next;
};

/**
 * This is just a linked list.
 */
class Queue {
  public:
    int size();
    void push(int val);
    int pop();
  private:
    QueueNode* front;
};
