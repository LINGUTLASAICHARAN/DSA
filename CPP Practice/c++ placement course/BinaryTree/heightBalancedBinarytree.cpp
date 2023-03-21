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

int height(Node * root){
    if(root == NULL) return 0;

    return 1 + max(height(root->left),height(root->right));
}

Node * makeTree(){
       Node * root = new Node(1);
       root->left = new Node(2);
       root->right = new Node(3);
       root->left->left = new Node(4);
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
              4 5 6 7 
        */


}
void inOrder(Node * root){
    if(root == NULL) return;

    inOrder(root->left);
    cout<<root->val << " ";
    inOrder(root->right);
}

/*

height balanced binary tree has abs(height(node->right) - height(node->left)) <=1 at all nodes

*/

bool isBalanced(Node * root){ // O(n^2)
    // base case
    if(root == NULL) return true;


    if(!isBalanced(root->left)) return false;
    if(!isBalanced(root->right)) return false;

    if(abs(height(root->left) - height(root->right)) > 1){
        return false;
    }

    return true;
}

bool isBalanced2(Node * root, int * h){ // h points to height of curent node

    if(root == NULL) return true;

    int lh = 0 , rh = 0;

    if(!isBalanced2(root->left , &lh) || !isBalanced2(root->right , &rh)) return false; // if the current node is leafnode lh and rh remain 0 and the nodes height becomes 1

    *h = 1+max(lh,rh); // assume leftheight and right height are calculated by the function calls

    if(abs(lh-rh) > 1) return false;

    return true;


}
int main()
{
    Node * root = makeTree();
    inOrder(root);
    cout << endl;
    cout << "height is : " <<height(root) << endl;
    int h;
    cout<<(isBalanced2(root,&h) ? "balaned" : "not balanced") << endl;
 return 0;
}