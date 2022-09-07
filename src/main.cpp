#include "iostream"
#include "sum.h"
#include "config.h"

int main(int argc, char* argv[]) {
  
  std::cout << argv[0] << " Version " << PROJECT_VERSION_MAJOR << "." << PROJECT_VERSION_MINOR << '\n';
  std::cout << "hello" << "\n";
  std::cout << sum(1,1) << "\n";
  return EXIT_SUCCESS;
}
