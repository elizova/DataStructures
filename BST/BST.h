#pragma once

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int data): data(data), left(nullptr), right(nullptr) {}
};

class BST {
private:
    void insert(int val, Node*& node);
    void remove(int val, Node*& node);
    Node*& find_min(Node*& node);

public:
    Node* root;
    BST(): root(nullptr) {}
    void insert(int val);
    void remove(int val);
};
