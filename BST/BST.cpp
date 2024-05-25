#include <iostream>
#include "BST.h"

void BST::insert(int val) {
    insert(val, root);
}

void BST::insert(int val, BSTNode*& node) {
    if (node == nullptr) {
        node = new BSTNode(val);
        return;
    }
    if (val < node->data) {
        insert(val, node->left);
    }
    else if (val > node->data) {
        insert(val, node->right);
    }
}

void BST::remove(int val) {
    remove(val, root);
}

void BST::remove(int val, BSTNode*& node) {
    if (node == nullptr) {
        return;
    }
    if (val < node->data) {
        remove(val, node->left);
    }
    if (val > node->data) {
        remove(val, node->right);
    }
    if (val == node->data) {
        BSTNode* del = nullptr;
        if (node->left == nullptr && node->right == nullptr) {
            del = node;
            node = nullptr;
        }
        else if (node->left != nullptr && node->right == nullptr) {
            del = node;
            node = node->left;
        }
        else if (node->left == nullptr && node->right != nullptr) {
            del = node;
            node = node->right;
        }
        else {
            BSTNode*& min = find_min(node->right);
            node->data = min->data;
            remove(min->data, node->right);
        }
        if (del != nullptr) {
            delete del;
            del = nullptr;
        }
    }
}

BSTNode*& BST::find_min(BSTNode*& node) {
    if (node == nullptr || node->left == nullptr) {
        return node;
    }
    return find_min(node->left);
}
