#include<bits/stdc++.h>
using namespace std;
struct me
{
    string name;
    me(string x){
        name = x;
    }
};


struct Node{
    Node * next;
    int val;

    Node(Node * x, int p){
        next = x;
        val = p;

    }
        Node(int p){
        next = NULL;
        val = p;

    }

};
int main()
{
    Node a = Node(33);
    cout << a.val;

 return 0;
}