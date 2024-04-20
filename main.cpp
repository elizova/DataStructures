#include <iostream>
#include "Heap/Heap.h"
#include "Heap/HeapTests.h"

void delimiter(){
    for(int i = 0; i < 10; ++i){
        std::cout << '_';
    }
    std::cout << std::endl;
}

int main() {
    Heap h;
    Heap_tests heap;

    heap.test0(h);
    delimiter();

    heap.test1(h);
    delimiter();

    heap.test2(h);
    delimiter();

    heap.test3(h);

    return 0;
}
