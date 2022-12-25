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
  void setLeft(int newNode);
  void setRight(int newNode);

  int getValue();
  Node *getLeft();
  Node *getRight();
};

#endif // NODE
