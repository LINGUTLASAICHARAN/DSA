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


Node * buildPreIn(int preorder[],int inorder[],int start,int end){
    // here start , end  represents portion inorder as an array
    static int pos = 0; // in preorder array
    Node * r = new Node(preorder[pos]);
    int find;
    for(int i = start;i<= end;i++){
        if(inorder[i] == preorder[pos]){
            find = i;
            break;
        }
    }
    pos++; // after processing a node increase the pointer
    if(find != start){
        r->left = buildPreIn(preorder,inorder,start,find-1);
    }
    else{
        r->left = NULL;
    }
    if(find != end ){
        r->right = buildPreIn(preorder,inorder,find+1,end);
    }
    else{
        r->right = NULL;
    }
    return r;
}


int main()
{
       
   int pre_order[] = {1,2,4,3,5};
   int in_order[] = {4,2,1,3,5};
   int n =5;
   int start = 0,end = n-1;

   Node * build = buildPreIn(pre_order,in_order,start,end); 
   preOrder(build);
   cout<<endl;
   inOrder(build);
   cout<<endl;
    
 return 0;
}