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
    cout << "NULL" << endl;
}
bool detectCycle(Node *head)
{ // floyyds algorithm
    Node *fast = head;
    Node *slow = head;
    while (!(fast == NULL || fast->next == NULL))
    {
        // when !(x || y) is the condition then ix x or y is true the loop breaks
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow){
            cout<<"met at " << fast->val <<endl;
            return true;
        }
    }
    return false;
}
void makeCycle(Node *head, int k)
{

    Node *start;
    int x = 1;
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (x == k)
            start = temp;
        temp = temp->next;
        x++;
    }
    temp->next = start;
}
void removeCycle(Node * &head){ // assuming cycle is there
    Node * slow = head, *fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(fast != slow);
    fast = head;
    while(fast->next != slow->next){
        fast = fast->next;
        slow = slow->next; 
    }
    slow->next = NULL;
}




// datection and removal of loop is done here


int main()
{
    Node *head = NULL; // head node pointer

    for (int i = 1; i <= 6; i++)
    {
        insertAttTail(head, i);
    }
    print(head);
    makeCycle(head, 3);
    cout << "made cycle form end to 3"<<endl;
    cout << (detectCycle(head) ? "cyclefound" : "no cycle") << endl;
    removeCycle(head);
    cout << "cycle removed"<<endl;
    cout << (detectCycle(head) ? "cyclefound" : "no cycle found") << endl;
    print(head);
    return 0;
}
