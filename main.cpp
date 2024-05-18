#include "Heap/HeapTests.h"
#include "BST/BSTTests.h"
#include "AVLTree/AVLTreeTests.h"

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

    BST_tests::bst_height();

    BST_tests::random_elements();
}

void avl_tests() {
    AVL_tests::create_avl();

    AVL_tests::remove_from_avl();

    AVL_tests::avl_height();

    AVL_tests::random_elements();
}

int main() {

    avl_tests();

    return 0;
}
