#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	//constructor for the node class
	Node(string i, Node * l, Node* r)
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
		ROOT = NULL; // initializing ROOT to null
	}

	void insert(string element) // insert a node in the binary search tree
	{
		Node* newNode = new Node(element, NULL, NULL); // Allocate memory for the new node
		newNode->info = element; // assign value to the data field of the new node
		newNode->leftchild = NULL; // make the left child of the new nide point to NULL
		newNode->rightchild = NULL; //  make the right child of the new nide point to NULL

		Node* parent = NULL;
		Node* currentNode = NULL;
		search(element, parent, currentNode); // locate the node which will be the parent of the node to be inserted

		if (parent == NULL) //if the parents is NULL (tree is empty)
		{
			ROOT = newNode; // mark the new node as root
			return; // exit
		}

		if (element < parent->info) // if the value in the data field of the new node is less than that of the parent
		{
			parent->leftchild = newNode; // make the left child of the parent point to the new node
		}
		else if (element < parent->info) // if the value int the data field of the new node is greater than of the parent
		{
			parent->rightchild = newNode; // make the right child of the parent point to the new node
		}
	}
};