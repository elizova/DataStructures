#pragma once
#include <vector>
#include "Heap.h"

class Heap_tests{
public:
    std::vector<int> heap;
    void test0(Heap& heap){
        heap.push(1);
        heap.push(3);
        heap.push(-5);
        heap.push(48);
        heap.push(-21);
        heap.push(4);
        heap.push(-100);
        heap.push(-15);
        heap.push(47);
        heap.push(22);
        heap.print(0, 0);
    }
    void test1(Heap heap){
        heap.push(35);
        heap.print(0, 0);
    }

    void test2(Heap heap){
        heap.pop();
        heap.print(0, 0);
    }

    void test3(Heap heap){
        std::cout << heap.top();
    }

};

