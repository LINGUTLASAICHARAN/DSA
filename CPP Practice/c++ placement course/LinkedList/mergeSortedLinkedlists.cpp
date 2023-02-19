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

Node * merge (Node * head1,Node * head2){ // creating a new linked list

    Node * ans = NULL;
    while (head1 != NULL && head2!= NULL)
    {
        if(head1->val <= head2->val){
            insertAtTail(ans,head1->val);
            head1=head1->next;
        }
        else{
            insertAtTail(ans,head2->val);
            head2=head2->next;
        }
    }
    if(head2 == NULL){
        while(head1 != NULL){
            insertAthead(ans,head1->val);
            head1 = head1->next;

        }
    }
    else{
        while(head2 != NULL){
            insertAtTail(ans,head2->val);
            head2 = head2->next;
        }
    }
    return ans;
}

Node * recMerge(Node * head1 , Node * head2){ // recursive solution making link changes
    if(head1 == NULL) return head2; //base case ll1 is exhusted first
    if(head2 == NULL) return head1; // ll2 is exhausted first

    if(head1->val < head2->val){
        head1->next = recMerge(head1->next ,head2);
        return head1;
    }
    else{
       
        head2 ->next = recMerge(head1,head2->next);
        return head2;
    }

}

Node * mergeIterative(Node * head1 , Node * head2){
    Node * ans , * temp = NULL;

    while(head1 != NULL && head2 != NULL){
        if(head1->val < head2->val){
            if(temp == NULL){
                temp = head1;
                ans = temp;
                head1 = head1->next;
            }
            else{
                temp->next = head1;
                temp = temp->next; // moving it forward for maintaining tail
                head1 = head1->next;
            }
        }
        else{
            if( temp == NULL){
                temp = head2;
                ans = temp;
                head2 = head2->next;
            }
            else{
                temp->next = head2;
                temp = head2; // moving temp
                head2 = head2->next;
            }
        }
    }
    if(head2 == NULL){
        temp->next = head1;
    }
    else{
        temp->next = head2;
    }
    return ans;
}
int main()
{
    Node *head1 = NULL; // head node pointer

    for (int i = 1; i <= 6; i++)
    {
        insertAtTail(head1, i);
    }
    print(head1);

    Node * head2 = NULL;
    for(int i = 7;i<=12;i++){
        insertAtTail(head2,i);
    }
    print(head2);
    Node * head3 = mergeIterative(head1,head2); // can use any of the functions
    cout << "-------------after Merging-----------------"<<endl;
    print(head3);
    return 0;
}