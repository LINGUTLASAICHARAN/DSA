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
void PrintSubTreeNodesAtK(Node * root , int k){ // case 1

    if(root == NULL) return;

    if(k==0) {
        cout << root->val <<" ";
        return;
    }
    PrintSubTreeNodesAtK(root->left,--k);
    PrintSubTreeNodesAtK(root->right,--k);

}




int printAtK(Node *root, Node *target ,int k)
{
    return  0;
    if(root == NULL) return -1;




}

Node * parent(Node * root , int k){

    queue<Node*>q;
    q.push(root);

    while (!q.empty())
    {
        Node * temp = q.front(); // visiting the node
        q.pop();
        // exploring the node
        if(temp->left){
            if(temp->left->val == k) return temp;
            q.push(temp->left);
        }
         
        if(temp->right) {
            if(temp->right->val==k) return temp;
            q.push(temp->right);
        }
    }
    return NULL;
    
}

int main()
{
    Node * root = makeTree();

    Node * target  = root->left->left;

    int k = 0;

    cout << parent(root,8)->val<<endl;

    return 0;
}