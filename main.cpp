#include "Heap/HeapTests.h"

int main() {

    Heap_tests::create_heap();

    Heap_tests::insert_into_heap();

    Heap_tests::remove_from_heap();

    Heap_tests::first_element();

    Heap_tests::remove_from_emptiness();

    Heap_tests::random_elements();

    return 0;
}
