#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node* next; 
    node(int x){
        val = x;
        next = NULL;
    }
}; // ************** dont miss semi colon after class

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

void insertAttTail(Node *&head, int x)
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



/*
 put even elements after odd elements in the linked list based on position
*/
void evenAfterOdd(Node * head){
    if(head == NULL || head ->next == NULL) return;
    Node * evenStart = head->next;
    Node * odd = head;
    Node * even = head->next;
    while(odd->next != NULL && even->next != NULL){
        odd = odd->next = even->next;
        even = even->next = odd->next;
    }
    odd->next = evenStart;
}
int main()
{
    Node *head = NULL; // head node pointer

    for (int i = 1; i < 4; i++)
    {
        insertAttTail(head, i);
    }
    evenAfterOdd(head);
    print(head);

    return 0;
}