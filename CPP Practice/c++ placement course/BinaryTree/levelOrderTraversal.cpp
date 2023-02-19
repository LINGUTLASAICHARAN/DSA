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

int levelSum(Node * root , int level){
    // root at level 0
    if(root == NULL){
        return 0;
    } 

    else if(level == 0){

     return root->data;
    }
    else{
        return levelSum(root->left,level-1) + levelSum(root->right ,level-1);
    }
}

void levelOrderTraversal(Node * root){
    if(root == NULL) return;
    queue<Node*> q; // use this queue to traverse form left to right
    q.push(root);
    q.push(NULL);
    int level = 0;
    cout<< "level 0"<<endl;
    while (q.size() != 1)
    {
        if(q.front() == NULL){
            level++;
            cout<<endl<<"level "<<level<<endl;
            
            q.pop();
            q.push(NULL);
        }
        Node * temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }

    }
    cout<<endl;


}

int sumAtLevelK(Node * root,int level){ 
    // using queue
    if(!root) return -1; // assuming tree has no -ve values
    int sum = 0;
    int k = 0;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
       Node * temp = q.front();
       q.pop();
       if(temp){
            if(level == k){
                sum+= temp->data;
            }
            if(temp->left){
                q.push(temp->left);
            } 
            if(temp->right) {
                q.push(temp->right);
            }
       }
       else{
        // encountering NULL implies a level has been completely traversed
            if(!q.empty()){
                k++;
                q.push(NULL);
            }

       }
    }
    if(k<level){
        return 0;
    }
    return sum;
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
int main()
{
       
    Node * root = makeTree();
    cout<< levelSum(root,1) <<endl;
    levelOrderTraversal(root);
    cout<<sumAtLevelK(root,2);   
 return 0;
}