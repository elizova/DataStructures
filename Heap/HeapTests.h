#pragma once
#include <vector>
#include <random>
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
    static void create_heap() {
        Heap heap({});
        heap_maker(heap);
        heap.print(0, 0);
        delimiter();
    }

    static void insert_into_heap() {
        Heap heap({});
        heap_maker(heap);
        heap.push(35);
        heap.print(0, 0);
        delimiter();
    }

    static void remove_from_heap() {
        Heap heap({});
        heap_maker(heap);
        heap.pop();
        heap.print(0, 0);
        delimiter();
    }

    static void first_element() {
        Heap heap({});
        heap_maker(heap);
        std::cout << heap.top() << std::endl;
        delimiter();
    }

    static void remove_from_emptiness() {
        Heap heap({});
        heap.pop();
        std::cout << heap.top() << std::endl;
        delimiter();
    }

    static void random_elements() {
        Heap heap({});
        std::vector<int> random(1000000);
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(-1000000, 1000000);
        for (int& i : random) {
            i = dis(gen);
        }
        int min = random[0];
        for (int& i : random) {
            if (i < min) {
                min = i;
            }
        }
        heap = random;
        std::cout << heap.top() << std::endl;
        std::cout << min << std::endl;
        delimiter();
    }
};
