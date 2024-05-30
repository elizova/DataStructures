cmake_minimum_required(VERSION 3.26)
project(DataStructures)

set(CMAKE_CXX_STANDARD 20)

add_executable(DataStructures main.cpp
	Heap/Heap.cpp BST/BST.cpp BST/AVLTree.cpp)
