#pragma once
#include "Node.h"

class AVL {
private:
    void add(int val, AVLNode*& node);
    void remove(int val, AVLNode*& node);
    AVLNode*& find_min(AVLNode*& node);
    AVLNode*& rotate_right(AVLNode*& root);
    AVLNode*& rotate_left(AVLNode*& root);
    AVLNode*& left_right(AVLNode*& root);
    AVLNode*& right_left(AVLNode*& root);
    int get_height(AVLNode*& node);
    void calc_height(AVLNode*& node);
    int get_balance(AVLNode*& node);
    AVLNode*& balance(AVLNode*& node);
public:
    AVLNode* root;
    AVL() : root(nullptr) {}
    void add(int val);
    void remove(int val);
    void print(AVLNode*& node, int depth);
};
