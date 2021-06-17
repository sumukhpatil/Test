#include "test.h"

int main() {
    Test test;
    test.setSize(3);

    std::cout << test.getSize() << std::endl;

    return 0;
}