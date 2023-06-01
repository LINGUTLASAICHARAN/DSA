#include <bits/stdc++.h>
using namespace std;

struct Node
{

    Node *left;
    Node *right;
    int val;

    Node(int x)
    {
        val = x;
    }
};

Node *makeTree()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->left->left = new Node(40);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(8);
    return root;
    /*
              1
             / \
            2   3
           / \ / \
          4  5 6  7
         /         \
        40          8
     */
}

// flatten into a linked list ,left is null, right is next i linked list
Node *flattenPreOrder(Node *root)
{

    if (root == NULL)
        return NULL;

    Node *h1, *h2;
    h1 = flattenPreOrder(root->left);
    h2 = flattenPreOrder(root->right);

    if (h1 && h2)
    {
        root->right = h1;
        Node *t = h1;
        while (t->right != NULL)
        {
            t = t->right;
        }
        t->right = h2;
    }
    if (h1 == NULL)
    {
        root->right = h2;
    }

    if (h2 == NULL)
    {
        root->right = h1;
    }

    return root;
}

void preorder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if (root == NULL)
        return;

    preorder(root->left);
    cout << root->val << " ";
    preorder(root->right);
}

void print(Node *head)
{
    if (head == NULL)
        return;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->right;
    }
    cout << endl;
}

void falttenpOrder(Node *root)
{

    if (root == NULL || (root->right == NULL && root->left == NULL))
        return;

    if (root->left)
    {
        falttenpOrder(root->left); // flatten right sub tree

        Node *temp = root->right;

        root->right = root->left;
        root->left = NULL;

        Node *t = root->right; // t contains flattened left subtree

 
            while (t->right != NULL)
            {
                t = t->right;
            }
            t->right = temp; // insert the right sub tree at end of the flattend left sub tree
    
        falttenpOrder(temp); // flattening the right sub tree
    }
    else{
        falttenpOrder(root->right);
    }
}
int main()
{

    Node *root = makeTree();

    cout << endl
         << "preorder " << endl;
    preorder(root);

    cout << endl;

    falttenpOrder(root);
    print(root);

    return 0;
}