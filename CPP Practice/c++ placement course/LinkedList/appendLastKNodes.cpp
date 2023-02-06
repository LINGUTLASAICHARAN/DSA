#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int x)
    {
        val = x;
        next = NULL;
    }
};

void insertAthead(Node *&head, int x)
{
    Node *n = new Node(x);
    n->next = head;
    head = n;
}

void insertAtTail(Node *&head, int x)
{
    Node *n = new Node(x);
    Node *temp = head;
    if (head == NULL)
    {

        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << "->";
        head = head->next;
    }
    cout << "NULL"<<endl;
}


// append last k nodes of a linked list to start of the ll

void append(Node * & head,int k){
    Node * a = head,*b = head;
    int i = 1;
    while (b->next != NULL)
    {
        if(i>= k+1){ // move both after b has reached k+1 position
            a = a->next;
        }
        b = b->next;
        i++;
    }
    // now a is pointing to that (k+1)th  node from end this itself is a problem
    // here find kth node form end of ll is used as base problem
    Node * temp = a->next;
    a->next = NULL;
    b->next = head;
    head = temp;
     
}

int main()
{
    Node *head = NULL; // head node pointer

    for (int i = 1; i <= 6; i++)
    {
        insertAtTail(head, i);
    }
    print(head);
    append(head , 3);// last two
    print(head);

    return 0;
}