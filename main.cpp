#include "test.h"

int main() {
    Test test;
    test.setSize(3);
    test.setSize(10);

    std::cout << test.getSize() << std::endl;
    std::cout << test.getInterval() << std::endl;

    return 0;
}