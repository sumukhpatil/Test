#include "test.h"

Test::Test() {
    size = 0;
    name = "N/A";
}

void Test::setSize(int sizeIn) {
    size = sizeIn;
}

void Test::setVec(std::vector<int> vecIn) {
    vec = vecIn;
}
