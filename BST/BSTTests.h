#pragma once
#include "BST.h"

class BST_tests {
private:
    static void bst(BST& b) {
        b.insert(19);
        b.insert(31);
        b.insert(24);
        b.insert(2);
        b.insert(11);
        b.insert(1);
        b.insert(5);
    }
public:
    static void create_btree() {
        BST b {};
        bst(b);
    }
    static void remove_from_btree() {
        BST b {};
        bst(b);
        b.remove(2);
        b.remove(15);
    }
};
