#include "config.h"
#include "iostream"
#include "node/Node.h"

int main(int argc, char *argv[]) {
  std::cout << argv[0] << " Version " << PROJECT_VERSION_MAJOR << "."
            << PROJECT_VERSION_MINOR << '\n';

  Node *root = new Node(1);

  root->setLeft(2);
  root->setRight(3);

  std::cout << "the root value is: " << root->getValue() << '\n';

  std::cout << "the left value is: " << root->getLeft()->getValue() << '\n';
  std::cout << "the right value is: " << root->getRight()->getValue() << '\n';
  return EXIT_SUCCESS;
}
