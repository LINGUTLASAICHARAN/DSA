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

void rightView(Node * root){ // just like level order
    if(root == NULL) return;

    queue<Node *> q;
    int level = 0;
    q.push(root);
    q.push(NULL);
    Node * prev;
    while (! q.empty())
    {
        Node * temp = q.front();
        q.pop();
        if(temp != NULL){
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        if(temp == NULL){
                cout << "level : "<<level<<"  " << prev->val<<endl;
            if(! q.empty()){
                
                level++;
                q.push(NULL);
            }
        }
        prev = temp;
    }
    
}

void leftView(Node * root){ // like level order
    if(root == NULL) return;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    Node * duplict;
    while (q.empty() == false)
    {
        Node * temp = q.front() ;

        q.pop();

        if(temp == NULL){
            cout <<"level "<<level<<": "<< duplict->val << endl;
            if(!q.empty()){
                q.push(NULL);
                level++;
            }
        }
        else{
            if(temp->right != NULL) q.push(temp->right);
            if(temp->left != NULL) q.push(temp->left);

        }
        duplict = temp;
    }
    
}

void rView(Node * root){ // like  level order but cleaner with out NUlls

    if(root == NULL) return;

    queue<Node *> q;
    q.push(root);
    int level = 0; 
    while (! q.empty())
    {
        int n = q.size();
        // cout << n;
        for (int i = 0; i < n; i++)
        {
            Node * temp = q.front();
            q.pop();

            if(i == n -1 ) cout << "level "<< level <<": "<<temp->val << endl;
            if( temp ->left != NULL) q.push(temp ->left);
            if(temp -> right != NULL) q.push(temp ->right);
        }  
        level++;
        
    }
    
}

void lView(Node * root){ // like  level order but cleaner with out NUlls

    if(root == NULL) return;

    queue<Node *> q;
    q.push(root);
    int level = 0; 
    while (! q.empty())
    {
        int n = q.size();
        // cout << n;
        for (int i = 0; i < n; i++)
        {
            Node * temp = q.front();
            q.pop();

            if(i == 0 ) cout << "level "<< level <<": "<<temp->val << endl;
            if( temp ->left != NULL) q.push(temp ->left);
            if(temp -> right != NULL) q.push(temp ->right);
        }  
        level++;
        
    }
    
}

int main()
{
    Node * root  =  makeTree();

    cout << "right viwew" <<endl;

    rView(root);

    cout << "left view" << endl;

    lView(root);
    
 return 0;
}