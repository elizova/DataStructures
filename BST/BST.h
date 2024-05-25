#pragma once
#include "Node.h"

class BST {
private:
    void insert(int val, BSTNode*& node);
    void remove(int val, BSTNode*& node);
    BSTNode*& find_min(BSTNode*& node);

public:
    BSTNode* root;
    BST(): root(nullptr) {}
    void insert(int val);
    void remove(int val);
};
