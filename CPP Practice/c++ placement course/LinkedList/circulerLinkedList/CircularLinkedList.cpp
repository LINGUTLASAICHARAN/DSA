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

void insertAtTail(Node *&head, int x)
{
    Node *n = new Node(x);
    if (head == NULL)
    {
        head = n;
        n->next = head;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = n;
    n->next = head;
}

void insertAtHead(Node *&head, int x)
{
    Node *n = new Node(x);
    if (head == NULL)
    { // when linked list this applies
        head = n;
        head->next = head;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "empty list" << endl;
        return;
    }
    Node *temp = head;
    // while (temp->next != head)
    // {
    //     cout << temp->val << "->";
    //     temp = temp->next;
    // }

    // cout << temp->val << "->head" << endl;

    // --------------------or----------
    do
    {
        cout << temp->val << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "head\n";
}

void deleteHead(Node * &head){
    Node * toDelete = head;
    Node * temp = head;
    while(temp ->next != head) {
        temp=temp->next;
    }
    temp->next = head->next;
    head=head->next;
    delete toDelete;

}

void erase(Node *&head, int pos)
{
    if(pos == 1){
        deleteHead(head);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    Node * toDelete = temp ->next;
    temp->next = temp->next->next;
    delete toDelete;
}
int main()
{

    Node *head = NULL;
    for (int i = 1; i < 7; i++)
        insertAtTail(head, i);
    print(head);
    erase(head,6);
    print(head);
    return 0;
}