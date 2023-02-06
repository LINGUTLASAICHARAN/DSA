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
void reverse(Node *&head)
{
    Node *cur = head;
    Node *prev = NULL;
    while (cur != NULL)
    {
        Node *next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
}
Node *revRec(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *temp = revRec(head->next);
    head->next->next = head;
    head->next = NULL;

    return temp;
}

Node *reverseKnodes(Node *head, int k)
{
    // 1->2->3->4->5->6 for k = 2 becomes 2->1->4->3->6->5
    if(head == NULL || head->next == NULL){  // base case
        return head;
    }
    Node *cur = head;
    Node *prev = NULL;
    int x = k;
    while (x-- && cur != NULL)
    {
        Node *next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    // if(cur != NULL){ // recursion ends when threre is no more elements to be sorted
    //     head->next = reverseKnodes(cur , k);
    // }
    head->next = reverseKnodes(cur,k);
    return prev;
}

int main()
{
    Node *head = NULL; // head node pointer

    for (int i = 1; i < 6; i++)
    {
        insertAthead(head, i);
    }
    print(head);
    reverse(head);
    print(head);
    head = revRec(head);
    print(head);
    Node *head1 = NULL;
    for(int i =7;i> 0;i--) insertAthead(head1,i);
    cout << "before reverse k nodes" <<endl;
    print(head1);
    head1 = reverseKnodes(head1, 3);
    cout << "after reverse k = 3 nodes" <<endl;
    print(head1);

    return 0;
}