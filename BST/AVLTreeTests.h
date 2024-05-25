#pragma once
#include <random>
#include "AVLTree.h"

class AVL_tests {
private:
    static void delimiter() {
        for (int i = 0; i < 10; ++i) {
            std::cout << '_';
        }
        std::cout << std::endl;
    }
    static void avl(AVL& a) {
        a.add(21);
        a.add(9);
        a.add(17);
        a.add(34);
        a.add(49);
        a.add(12);
        a.add(11);
        a.add(38);
        a.add(45);
    }
    static int height(Node_*& node) {
        if (node == nullptr) {
            return 0;
        }
        int left_height = height(node->left);
        int right_height = height(node->right);

        return std::max(left_height, right_height) + 1;
    }
public:
    static void create_avl() {
        AVL a {};
        avl(a);
        a.print(a.root, 0);
        delimiter();
    }
    static void remove_from_avl() {
        AVL a {};
        avl(a);
        a.remove(34);
        a.remove(38);
        a.print(a.root, 0);
        delimiter();
    }
    static void avl_height() {
        AVL a {};
        int N = 10;
        for (int i = 0; i < N; ++i) {
            a.add(i);
        }
        int height1 = height(a.root);
        int height2 = a.root->height;
        std::cout << height1 << " " << height2 << std::endl;
    }
    static void random_elements() {
        AVL a {};
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(-300, 300);
        for (int i = 0; i < 100; ++i) {
            int add = dis(gen);
            a.add(add);
        }
        for (int i = 0; i < 100; ++i) {
            int del = dis(gen);
            a.remove(del);
        }
    }
};
