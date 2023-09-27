#include "config.h"
#include "iostream"
#include "Binary_search_tree.h"
#include "Bst_printer.h"

int main(int argc, char *argv[]) {
  std::cout << argv[0] << " Version " << PROJECT_VERSION_MAJOR << "."
            << PROJECT_VERSION_MINOR << '\n';

  Binary_search_tree *bst = new Binary_search_tree();

  int values[] = {5, 10, 3, 7, 20, 2, 4, 48, 6, 8};
  int length = sizeof(values) / sizeof(values[0]);

  bst->insertNodesFromArray(values, length);

  Printer *printer = new Bst_printer();
  printer->print(bst);


  return EXIT_SUCCESS;
}
