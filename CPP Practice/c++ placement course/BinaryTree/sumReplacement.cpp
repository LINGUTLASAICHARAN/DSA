#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node * left,*right;
    int val;
    Node(int x){
        left= right = NULL;
        val =x;
    }
};



Node * makeTree(){
       Node * root = new Node(1);
       root->left = new Node(2);
       root->right = new Node(3);
       root->left->left = new Node(4);
       root->left->right = new Node(5);
       root->right->left = new Node(6);
       root->right->right = new Node(7);
       return root;
}
void inOrder(Node * root){
    if(root == NULL) return;

    inOrder(root->left);
    cout<<root->val << " ";
    inOrder(root->right);
}
void sumReplace(Node * root){
    // O(N)
    // leaf nodes are intact as there are no childern this the key
    if(root== NULL) return;

    // if(root->left == NULL && root->right == NULL) return; // not required 

    sumReplace(root->left);
    sumReplace(root->right);
    // chrck before accessing the node
    // left child contaains thee sum of left sub-tree and similarly for rigth subtree
    if(root->left) root->val += root->left->val; // if there is subtree add the elemnts
    if(root->right) root->val += root->right->val; // 


}
int main()
{
    Node * root = makeTree();
    inOrder(root);
    cout<<endl;
    sumReplace(root);
    inOrder(root);
    cout<<endl;
 return 0;
}