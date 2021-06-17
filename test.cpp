#include "test.h"

Test::Test() {
    size = 0;
    name = "N/A";
}

Test::~Test() {}

void Test::setSize(int sizeIn) {
    size = sizeIn;
}

void Test::setVec(std::vector<int> vecIn) {
    vec = vecIn;
}

int Test::getSize() {
   return size;
}

std::vector<int> Test::getVec() {
    return vec;
}