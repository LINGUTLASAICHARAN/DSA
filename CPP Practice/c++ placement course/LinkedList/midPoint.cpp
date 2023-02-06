#include<bits/stdc++.h>
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

void print(Node *head){
    while(head != NULL){
        cout<<head->val<<"->";
        head = head->next;
    }
    cout <<"NULL\n";
}

// find midpoint in O(n);

int midpoint(Node * head){
    if(head ->next == NULL) return head->val;

    Node * slow = head, *fast = head;
    while (!(fast->next == NULL || fast->next->next == NULL))
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow->val;
}



int main()
{
    Node * head = NULL;
    int n  = 5;
    for(int i = 1; i<= n;i++){
        insertAtTail(head,i);
    }
    cout << midpoint(head) << endl;
    
 return 0;
}