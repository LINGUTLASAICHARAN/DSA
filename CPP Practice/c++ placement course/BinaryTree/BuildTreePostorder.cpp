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


Node * func(int post[] ,int in[],int start , int end){
    static int idx = end;

    if(start > end) return NULL;

    int cur = post[idx];
    idx--;
    int pos;

    Node * r = new Node(cur);

    for(int i = start ;i <= end;i++){
        if(in[i]==cur){
            pos = i;
            break;
        }
    }

    r->right = func(post,in,pos+1,end);
    r->left = func(post,in,start,pos-1);
    
    return r;
}


int main()
{
    int post[] = {4,2,5,3,1};
    int in[] = {4,2,1,5,3};
    int n = 5;

       
    Node * build = func(post,in,0,n-1);
    postOrder(build);
    cout<<endl;
    inOrder(build);
    cout<<endl;

 return 0;
}