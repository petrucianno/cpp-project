
#include <iostream>
#include <cstdlib>

#include "exampleConfig.h"

int main() {
    std::cout << "Hello, Boilerplate C++ v"
            << PROJECT_VERSION_MAJOR
            << "."
            << PROJECT_VERSION_MINOR
            << "."
            << PROJECT_VERSION_PATCH
            << "."
            << PROJECT_VERSION_TWEAK
            << std::endl;
    return 0;
}
