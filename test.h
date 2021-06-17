#ifndef TEST_H_
#define TEST_H_

#include <iostream>
#include <vector>
#include <algorithm>

class Test {
    private:
    int size;
    std::vector<int> vec;
    std::string name;

    public:
    Test();
    void setSize(int sizeIn);
    void setVec(std::vector<int> vecIn);
    int getSize();
    std::vector<int> getVec();

};

#endif