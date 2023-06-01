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

bool getPath(Node * root , vector<int> & v , int key){

    if(root == NULL ) return false;

    v.push_back(root->val);

    if(root->val == key) return true;

    if(getPath(root->left , v ,key) ||getPath(root->right , v ,key)){
        return true;
    }
    else{
        v.pop_back();
        return false;
    }
}

int min_distance(Node * root ,int n1 , int n2){
    if(n1 == n2) return 0;
    vector<int> p1 , p2;
    bool b1 = getPath(root , p1 ,n1 );
    bool b2 = getPath(root, p2 , n2);

    if(!(b1 && b2)) return -1;

    int l1 = p1.size() , l2 = p2.size();

    int lca = -1;
    int pos = -1;
    for (int i = 0; i < min(l1, l2)-1; i++)
    {
        if(p1[i+1] != p2[i+1]) {
            pos = i;
            lca = p1[i];
            break;
        }

    }
    
    if(lca == -1){
        pos = min(l1 , l2)-1;
        if(l1<l2){
            lca = p1[l1-1];
        }
        else{
            lca = p2[l2-1];
        }
    }

    return ((l1-pos-1) + (l2-pos-1));


}

int getPathLength(Node * root , int key){
    if( root == NULL ) return -1;

    if(root->val == key) return 0;

    int l1 = getPathLength(root->left , key);
    int l2 = getPathLength(root->right , key);

    if(l1 >= 0 ) return 1 + l1;

    if(l2 >= 0) return 1 + l2;
    else{
        return -1;
    }
    
    
}

Node *  lca(Node * root , int n1 , int n2){
    if(root == NULL ) return NULL;

    if(root->val == n1 || root ->val == n2) return root;

    Node * l1 = lca(root->left,n1 , n2);
    Node * l2 = lca(root->right , n1 , n2);

    if(l1  && l2 ){
        return root;
    }

    if(l1 ) return l1;
    else{
        return l2;
    }
}

int mindis(Node * root , int n1, int n2){

    // find lca and return sum of lengths of paths form lca to both nodes

    Node * point = lca(root ,n1 , n2);

    return getPathLength(point,n1) + getPathLength(point,n2);
}

int main()
{
    Node *root = makeTree();


    cout << mindis(root,8,6);


    return 0;
}