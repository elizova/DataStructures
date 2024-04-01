//
// Created by User on 30.03.2024.
//

#include "Heap.h"

void Heap:: sift_up(int index){
    while(arr[(index-1) / 2] < arr[index] && index > 0){
        std::swap(arr[(index-1) / 2], arr[index]);
        index = (index-1) / 2;
    }
}

void Heap:: sift_down(int index){
    int left = 2 * index + 1;
    int right = 2 * index +2;
    int child = left;
    if(arr[left] < arr[right]) child = right;
    if(arr[index] < arr[child]) {
        std::swap(arr[index], arr[child]);
        sift_down(child);
    }
}

void Heap:: heapify(){
    int n = arr.size();
    for(int i = n/2; i >= 0; i--){
        sift_down(i);
    }
}