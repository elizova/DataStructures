#pragma once

struct Node {
    int data;
    Node(int data) : data(data) {}
};

struct BSTNode : public Node {
    BSTNode* left;
    BSTNode* right;
    BSTNode(int data): Node(data), left(nullptr), right(nullptr) {}
};

struct AVLNode : public Node {
    int height;
    AVLNode* left;
    AVLNode* right;
    AVLNode(int data) : Node(data), left(nullptr), right(nullptr), height(1) {}
};
