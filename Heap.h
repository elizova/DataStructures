//
// Created by User on 17.03.2024.
//

#ifndef UNTITLED6_HEAP_H
#define UNTITLED6_HEAP_H
#include <iostream>
#include <vector>

class Heap{
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


#endif //UNTITLED6_HEAP_H
