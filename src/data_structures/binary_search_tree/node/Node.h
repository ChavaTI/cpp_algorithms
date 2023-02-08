#ifndef NODE
#define NODE

class Node {
private:
  int data;
  Node *left;
  Node *right;

public:
  Node(int value);

  void setData(int newValue);
  void setLeft(Node* left);
  void setRight(Node* right);

  int getData();
  Node *getLeft();
  Node *getRight();
};

#endif // NODE
