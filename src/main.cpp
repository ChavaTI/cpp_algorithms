#include "config.h"
#include "iostream"
#include "node/Node.h"

int main(int argc, char *argv[]) {
  std::cout << argv[0] << " Version " << PROJECT_VERSION_MAJOR << "."
            << PROJECT_VERSION_MINOR << '\n';

  return EXIT_SUCCESS;
}
