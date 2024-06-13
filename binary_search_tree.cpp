#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    // Constructor for the node class
    Node (string i, Node* l, Node* r)
    {
        info = 1;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
public:
    Node* ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Initializing ROOT to NULL
    }

    void insert(string element) // Insert a node in the binary search tree
    {
        
    };
};