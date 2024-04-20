#include "Heap.h"

void Heap::sift_up(int index){
    while((arr[(index-1) / 2] > arr[index]) && index > 0){
        int t = arr[(index-1) / 2];
        arr[(index-1) / 2] = arr[index];
        arr[index] = t;
        index = (index-1) / 2;
    }
}

void Heap::sift_down(int index){
    int left = 2 * index + 1;
    int right = 2 * index +2;
    int child = left;
    if(left < arr.size() && right < arr.size() && arr[left] > arr[right]) child = right;
    if(arr.size() > child && arr[index] > arr[child]) {
        int t = arr[child];
        arr[child] = arr[index];
        arr[index] = t;
    }
    else return;
    sift_down(child);
}

void Heap::heapify(){
    int n = arr.size();
    for(int i = n/2 - 1; i >= 0; i--){
        sift_down(i);
    }
}

void Heap::push(int value) {
    arr.push_back(value);
    sift_up(arr.size() - 1);
}

void Heap::pop() {
    if (arr.empty()) return;
    arr[0] = arr.back();
    arr.pop_back();
    if (!arr.empty()) sift_down(0);
}

int Heap::top() {
    if (arr.empty()) return -1;
    return arr[0];
}

void Heap::print(int index, int depth){
    if (index < arr.size()) {
        print(2 * index + 2, depth + 1);
        for (int i = 0; i < depth; ++i) {
            std::cout << "  ";
        }
        std::cout << arr[index] << std::endl;
        print(2 * index + 1, depth + 1);
    }
}