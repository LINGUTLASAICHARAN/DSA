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

void  intersect(Node * mother , Node * child,int pos){
    int count = 1;
    while(count != pos && mother != NULL){
        mother = mother->next;
        count++;
    }
    while (child -> next != NULL)
    {
        child = child ->next;
    }
    child->next = mother;
}

int length(Node * h){
    int l = 0;
    while(h != NULL) {
        h= h->next;
        l++;
    }
    return l;
}

int intersectionPoint(Node * h1,Node *h2){
    int l1 = length(h1);
    int l2 = length(h2);
    if(l1 < l2) swap(h1,h2); // just making l1 the longest ll
    int diff = abs(l1-l2) + 1;
    int pos = 1;
    while(pos != diff) {
        h1=h1->next;
        pos++;
    }
    while((h1 != h2)){
        h1 = h1->next;
        h2 = h2->next;
        if(h1 == NULL || h2 == NULL) return -1;
    }
    return h1->val;
}
int main()
{
    Node * h1 = NULL;
    Node * h2 = NULL;
    for(int i=1;i<= 6;i++) insertAtTail(h1,i);
    for(int i=9;i<= 10;i++) insertAtTail(h2,i);
    intersect(h1,h2,3); // intersect ll2 end at pos 5 of ll1
    print(h1);
    print(h2);
    cout<<intersectionPoint(h1,h2);
 return 0;
}