struct BinaryTreeNode {
  int value;
  BinaryTreeNode* left;
  BinaryTreeNode* right;
};

class BinaryTree {
  public:
    BinaryTree();
    int size();
    void insert(int key);
    BinaryTreeNode* search(int key);
  private:
    BinaryTreeNode* head;
};
