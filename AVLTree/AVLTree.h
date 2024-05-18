#pragma once

struct Node_ {
    int key;
    Node_* left;
    Node_* right;
    int height;

    Node_(int key) : key(key), left(nullptr), right(nullptr), height(1) {}
};

class AVL {
private:
    void add(int val, Node_*& node);
    void remove(int val, Node_*& node);
    Node_*& find_min(Node_*& node);
    Node_*& _right(Node_*& root);
    Node_*& _left(Node_*& root);
    Node_*& left_right(Node_*& root);
    Node_*& right_left(Node_*& root);
    int _height(Node_*& node);
    void calc_height(Node_*& node);
    int get_balance(Node_*& node);
    Node_*& balance(Node_*& node);
public:
    Node_* root;
    AVL() : root(nullptr) {}
    void add(int val);
    void remove(int val);
    void print(Node_*& node, int depth);
};
