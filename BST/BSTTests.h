#pragma once
#include <random>
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
    static int height(Node*& node) {
        if (node == nullptr) {
            return 0;
        }
        int left_height = height(node->left);
        int right_height = height(node->right);

        return std::max(left_height, right_height) + 1;
    }
public:
    static void create_bst() {
        BST b {};
        bst(b);
    }
    static void remove_from_bst() {
        BST b {};
        bst(b);
        b.remove(2);
        b.remove(15);
    }
    static void bst_height() {
        BST b {};
        int N = 10;
        for(int i = 0; i < N; ++i) {
            b.insert(i);
        }
        std::cout << height(b.root) << " " << N << std::endl;
    }
    static void random_elements() {
        BST b {};
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(-300, 300);
        for(int i = 0; i < 100; ++i) {
            int add = dis(gen);
            b.insert(add);
        }
        for(int i = 0; i < 100; ++i) {
            int del = dis(gen);
            b.remove(del);
        }
    }
};
