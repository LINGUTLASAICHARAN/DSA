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

bool getpath(Node *root, int q, vector<int> &v) // here path takes exponential time
{
    if (root == NULL)
        return false;

    v.push_back(root->val); // assume the node root is in the path

    if (root->val == q)
    {
        return true;
    }

    bool x = getpath(root->left, q, v) || getpath(root->right, q, v);
    if (x)
    {
        return x;
    }
    else
    {
        v.pop_back();
        return x;
    }
}

int lca(Node *root, int n1, int n2)
{ // find the point of divergence in the path to two nodes from root

    vector<int> path1, path2;

    if (getpath(root, n1, path1) && getpath(root, n2, path2))
    {
        // printing path 1
        for (auto x : path1)
        {
            cout << x << " ";
        }
        cout << endl;
        // printng path 2
        for (auto x : path2)
        {
            cout << x << " ";
        }
        cout << endl;

        // looking for point of divergence
        for (int i = 0; i < min(path1.size(), path2.size()) - 1; i++)
        {
            if (path1[i + 1] != path2[i + 1])
                return path1[i];
        }
        // if diverging path not found so far return the last node in the shorter of the two paths
        if(path1.size() < path2.size())
            return path1[path1.size() - 1];  
        else{
            return path2[path2.size() - 1];
        }
    }
    else
    {
        return -1;
    }
}


Node * lca_effective(Node *root, int n1, int n2) // doenot work if one node is in the tree and the other is not
{ 
    if(root == NULL) return NULL;


    if(root->val == n1 || root->val == n2) return root;

    Node * l , *r;

    l = lca_effective(root->left,n1,n2);
    r = lca_effective(root->right,n1,n2);

    if(l != NULL && r != NULL){ // one value on either side
        return root;
    }
    if(l != NULL) return l; //only on left

    return r;// only on right or no where
}

int main()
{
    Node *root = makeTree();
    int n1 = 80, n2 = 40;

    Node * x = lca_effective(root, n1, n2); // lca effective is easy to implement 3 cases only
    if(x) cout << x->val ;
    else{
        cout << "LCA not found"<<endl;
    }
    return 0;
}