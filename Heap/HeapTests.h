#pragma once
#include <vector>
#include "Heap.h"

class Heap_tests {
private:
    static void delimiter() {
        for (int i = 0; i < 10; ++i) {
            std::cout << '_';
        }
        std::cout << std::endl;
    }
    static void heap_maker(Heap& heap) {
        Heap h({1, 3, -5, 48, -21, 4, -100, -15, 47, 22});
        heap = h;
    }
public:
    static void test0(){
        Heap heap;
    static void test0() {
    static void test0() {
        Heap heap({});
        heap_maker(heap);
        heap.print(0, 0);
        delimiter();
    }
    
    static void test1() {
        Heap heap({});
        heap_maker(heap);
        heap.push(35);
        heap.print(0, 0);
        delimiter();
    }

    static void test2() {
        Heap heap({});
        heap_maker(heap);
        heap.pop();
        heap.print(0, 0);
        delimiter();
    }

    static void test3() {
        Heap heap({});
        heap_maker(heap);
        std::cout << heap.top();
    }
};
