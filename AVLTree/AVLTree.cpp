#include <iostream>
#include "AVLTree.h"

void AVL::add(int val) {
    add(val, root);
}

void AVL::add(int val, Node_*& node) {
    if (node == nullptr) {
        node = new Node_(val);
        return;
    }
    if (val < node->key) {
        add(val, node->left);
    }
    else if (val > node->key) {
        add(val, node->right);
    }
    calc_height(node);
    node = balance(node);
}

void AVL::remove(int val) {
    remove(val, root);
}

void AVL::remove(int val, Node_*& node) {
    if (node == nullptr) {
        return;
    }
    if (val < node->key) {
        remove(val, node->left);
    }
    if (val > node->key) {
        remove(val, node->right);
    }
    if (val == node->key) {
        Node_* del = nullptr;
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
            Node_*& min = find_min(node->right);
            node->key = min->key;
            remove(min->key, node->right);
        }
        if (del != nullptr) {
            delete del;
            del = nullptr;
        }
    }
    if (node != nullptr) {
        calc_height(node);
        node = balance(node);
    }
}

Node_*& AVL::find_min(Node_*& node) {
    if (node == nullptr || node->left == nullptr) {
        return node;
    }
    return find_min(node->left);
}

Node_*& AVL::rotate_right(Node_*& node) {
    Node_* temp = node;
    node = node->left;
    temp->left = node->right;
    node->right = temp;
    calc_height(node->right);
    calc_height(node);
    return node;
}

Node_*& AVL::rotate_left(Node_*& node) {
    Node_* temp = node;
    node = node->right;
    temp->right = node->left;
    node->left = temp;
    calc_height(node->left);
    calc_height(node);
    return node;
}

Node_*& AVL::left_right(Node_*& node) {
    node->left = rotate_left(node->left);
    node = rotate_right(node);
    return node;
}

Node_*& AVL::right_left(Node_*& node) {
    node->right = rotate_right(node->right);
    node = rotate_left(node);
    return node;
}

int AVL::get_height(Node_*& node) {
    if (node == nullptr) return 0;
    return node->height;
}

void AVL::calc_height(Node_*& node) {
    node->height = 1 + std::max(get_height(node->left), get_height(node->right));
}

int AVL::get_balance(Node_*& node) {
    if (node == nullptr) return 0;
    return get_height(node->right) - get_height(node->left);
}

Node_*& AVL::balance(Node_*& node) {
    if (get_balance(node) == -2) {
        if (get_balance(node->left) == -1) {
            node = rotate_right(node);
        }
        else {
            node = left_right(node);
        }
    }
    if (get_balance(node) == 2) {
        if (get_balance(node->right) == 1) {
            node = rotate_left(node);
        }
        else {
            node = right_left(node);
        }
    }
    return node;
}

void AVL::print(Node_*& node, int depth) {
    if (node == nullptr) return;
    print(node->left, depth + 1);
    for (int i = 0; i < depth; ++i) {
        std::cout << "  ";
    }
    std::cout << node->key << std::endl;
    print(node->right, depth + 1);
}
