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
        left = right = NULL;
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


bool  bfs(Node * root , int k){

    queue<Node*>q;
    q.push(root);

    while (!q.empty())
    {
        Node * temp = q.front(); // visiting the node
        q.pop();
        if(temp->val == k) return true;

        // exploring the nodes edges
        if(temp->left){
            q.push(temp->left);
        }
         
        if(temp->right) {
            q.push(temp->right);
        }
    }
    return false;
    
}
 bool search(Node * root , int k){
    if(!root) return false;

    if(root->val == k) return true;

    return search(root->right,k) || search(root->left,k);

 }
int main()
{
    Node * root = makeTree();

    Node * target  = root->left->left;

    int k = 0;

    cout << bfs(root,10)<<endl;
    cout << search(root,10)<<endl;
    return 0;
}