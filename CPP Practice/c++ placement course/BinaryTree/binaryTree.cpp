#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * left , * right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void inOrder(Node * r){
    // l R r
    if(r == NULL) return;
    inOrder(r->left);
    cout << r->data <<" ";
    inOrder(r->right);
}

void preOrder(Node * r){

    // R l r
    if(r == NULL) return;

    cout<<r->data <<" ";
    preOrder(r->left);
    preOrder(r->right);
}

void postOrder(Node * r){

    // l r R
    if(r== NULL) return;

    postOrder(r->left);
    postOrder(r->right);
    cout<<r->data<<" ";
}



int main()
{
    /*
        making this tree
            1  
           / \
          2   3
         / \
        4   5
    */
   Node * root = new Node(1);
   root->left = new Node(2);
   root->right = new Node (3);
   root->left->left = new Node(4);
   root->left->right = new Node(5);
   inOrder(root);
   cout <<endl;
   preOrder(root);
   cout<<endl;
   postOrder(root);
   cout<<endl;


 return 0;
}