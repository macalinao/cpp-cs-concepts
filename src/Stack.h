struct StackNode {
  StackNode(int val): val(val) {}
  int val;
  StackNode* next;
};

class Stack {
  public:
    void push(int val);
    int pop();
  private:
    StackNode* top;
};
