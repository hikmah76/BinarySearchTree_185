

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
        Node* newNode = new Node(element, NULL, NULL); //Allocate memory for the new node
        newNode->info = element; // Assign value to the data field of the new node
        newNode->leftchild = NULL; // Make the left cild of the new node point to NULL
        newNode->rightchild = NULL; // Make the right cild of the new node point to NULL

        Node* parent = NULL;
        Node* currentNode = NULL;
        search(element, parent, currentNode); // Locate the node which be the parent of  the node to be inserted

        if (parent == NULL) // if the parent is NULL (Tree is empty)
        {
            ROOT = newNode; //Mark the new node as ROOT
            return; // Exit
            }
        if (element < parent->info)// if the in the data field of the new node is less than that of the parent
        {
            parent->leftchild = newNode; // make the left cild of the parent point to the new node
        }
        else if (element > parent->info) // if the value in the data falied of the new node is greater than that of the paent
        {
            parent->rightchild = newNode; // make the right child of the parent point to the new node 
        }
    }
};
