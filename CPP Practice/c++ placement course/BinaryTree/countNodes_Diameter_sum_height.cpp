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

int countNodes(Node * root){
    if( root == NULL) return 0;

    return 1+countNodes(root->left)+countNodes(root->right);
}

int sumNodes(Node * root){
    if (root == NULL ) return 0;

    return root->data + sumNodes(root->left)+sumNodes(root->right);
}

int height(Node * root){

    //O(n)
    if(root == NULL){
        return 0;
    }

    return 1+max(height(root->left),height(root->left));
}

int diameter(Node * root){
    //O(n^2)
    if( !root) return 0;
    // if passing through root
    int diamThroughRoot = height(root->left) + height(root->right)+1;

    // if not passing through root just pick the max out of two
    int leftdiam = diameter(root->left);
    int rightdiam = diameter(root->right);
    // so finally pick the max out of three 
    return max(diamThroughRoot,max(leftdiam,rightdiam));

}

int diamOptim(Node* root, int * height){
    if(root == NULL){
        *height = 0;
        return 0;
    }
    int lh = 0 ,rh=0;
    int ld = diamOptim(root->left,&lh),rd = diamOptim(root->right,&rh);
    int curDiam = lh+rh+1;
    *height = max(lh,rh)+1;
    return max(curDiam,max(ld,rd));
}
int main()
{
       
    Node * root = makeTree();
    cout<<"Number of nodes is "<<countNodes(root)<<endl;
    cout<<"Sum of nodes is "<<sumNodes(root)<<endl;
    cout<<"Height of tree is "<<height(root)<<endl;
    cout<<"Diameter of tree is "<<diameter(root)<<endl;

    int height = 0;
    cout<<diamOptim(root,&height)<<endl;
 return 0;
}