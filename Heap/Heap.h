#pragma once
#include <iostream>
#include <vector>

class Heap {
private:
    std::vector<int> arr;
    void sift_up(int index);
    void sift_down(int index);

public:
    void heapify();
    void push(int value);
    void pop();
    int top();
    void print(int index, int depth);
};
