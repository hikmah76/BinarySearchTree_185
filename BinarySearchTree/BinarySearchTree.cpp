

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
