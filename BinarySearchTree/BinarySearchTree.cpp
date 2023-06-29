

#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    std::string info;
    Node* leftchild;
    Node* rightchild;

    // Constructor for the Node class
    Node(std::string i, Node* l, Node* r)
    {
        info = i;
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
        ROOT = NULL; //Initializing ROOT to NULL
    }
    void insert(string element) //Insert a node in the binary search tree
    {

    }
};
