/* Binary Search Tree */
#include <cstdlib>
#include <iostream>

class Node
{
public:
    Node(int v)
    {
        data = v;
        left = 0;
        right = 0;
    }

    int data;
    Node* left;
    Node* right;
};

void Add(Node** root,Node* n)
{
    if (!*root)
    {
      *root = n;
      return;
    }

    if ((*root)->data < n->data)
    {
      Add(&(*root)->right,n);
    }
    else
    {
      Add(&(*root)->left, n);
    }
}

void Print(Node* node)
{
    // if node does not exist it returns Nothing, else it will print out tree.
    if(!node) return;
    Print(node->left);
    std::cout << node->data << " ";
    Print(node->right);
}

int main()
{
    Node* root = 0;

    // Add values to tree by reference
    Add(&root, new Node(1));
    Add(&root, new Node(2));
    Add(&root, new Node(-1));
    Add(&root, new Node(12));
    Add(&root, new Node(13));
    Add(&root, new Node(14));
    Add(&root, new Node(15));
    Add(&root, new Node(9));
    Add(&root, new Node(3));
    Add(&root, new Node(4));
    Add(&root, new Node(5));
    Add(&root, new Node(6));
    Add(&root, new Node(7));
    Add(&root, new Node(10));
    Add(&root, new Node(11));
    Print(root);
    return 0;
}
