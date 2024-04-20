#pragma once
#include <vector>
#include "Heap.h"

class Heap_tests {
private:
    static void delimiter(){
        for(int i = 0; i < 10; ++i){
            std::cout << '_';
        }
        std::cout << std::endl;
    }
    static void heap_maker(Heap& h){
        h.push(1);
        h.push(3);
        h.push(-5);
        h.push(48);
        h.push(-21);
        h.push(4);
        h.push(-100);
        h.push(-15);
        h.push(47);
        h.push(22);
    }
public:
    static void test0(){
        Heap heap;
        heap_maker(heap);
        heap.print(0, 0);
        delimiter();
    }
    static void test1(){
        Heap heap;
        heap_maker(heap);
        heap.push(35);
        heap.print(0, 0);
        delimiter();
    }

    static void test2(){
        Heap heap;
        heap_maker(heap);
        heap.pop();
        heap.print(0, 0);
        delimiter();
    }

    static void test3(){
        Heap heap;
        heap_maker(heap);
        std::cout << heap.top();
    }
};

