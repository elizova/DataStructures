#include <iostream>
#include "Heap.h"

void test1(Heap heap, int a){
    heap.push(a);
    heap.print(0, 0);
}

void test2(Heap heap){
    heap.pop();
    heap.print(0, 0);
}

void test3(Heap heap){
    std::cout << heap.top();
}

void delimiter(){
    for(int i = 0; i < 10; ++i){
        std::cout << '_';
    }
    std::cout << std::endl;
}

int main() {

    Heap h;
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

    h.print(0, 0);
    delimiter();

    test1(h, 35);
    delimiter();

    test2(h);
    delimiter();

    test3(h);

    return 0;
}
