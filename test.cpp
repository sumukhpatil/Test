#include "test.h"

Test::Test() {
    size = 0;
    name = "N/A";
    interval = 0.0;
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