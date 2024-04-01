//
// Created by User on 17.03.2024.
//

#ifndef UNTITLED6_HEAP_H
#define UNTITLED6_HEAP_H
#include <iostream>
#include <vector>

class Heap{
    std::vector<int> arr;
    void sift_up(int index);
    void sift_down(int index);
    void heapify();
};


#endif //UNTITLED6_HEAP_H
