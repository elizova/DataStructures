#include "Heap/HeapTests.h"
#include "BST/BSTTests.h"

void heap_tests() {
    Heap_tests::create_heap();

    Heap_tests::insert_into_heap();

    Heap_tests::remove_from_heap();

    Heap_tests::first_element();

    Heap_tests::remove_from_emptiness();

    Heap_tests::random_elements();
}

void bst_tests() {
    BST_tests::create_bst();

    BST_tests::remove_from_bst();
}

int main() {

    bst_tests();

    return 0;
}
