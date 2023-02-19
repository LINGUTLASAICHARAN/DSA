#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        Node * next;
        Node * prev;
        int val;
        Node(int n){
            val = n;
            next = prev = NULL;
        }
        Node(){}
};

void insertAtHead(Node * &head , int n){
    Node * nn = new Node(n);\
    if(head == NULL){
        head = nn;
        return;
    }
    nn->next = head;
    head->prev =nn;
    head = nn;
}
void insertAtTail(Node * &head , int n){
    Node * temp = head;
    Node * nn = new Node(n);
    if(temp == NULL){
        head = nn;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    
    nn->prev = temp;
    temp ->next = nn;
    
}
void print(Node * head){
    while (head != NULL)
    {
        cout << head->val<<"->";
        head=head->next;
    }
    cout <<"NULL"<<endl;
}

void deletePos(Node * & head,int pos){
    Node * temp = head;
    int c = 1;
    if(pos == 1){
        Node * temp = head;
        head = head->next;
        head->prev =NULL;
        delete temp;
        return;
    }
    while (temp != NULL && c != pos)
    {
        temp = temp->next;
        c++;
    }
    temp ->prev->next = temp->next;

        if(temp->next != NULL){
            temp->next->prev = temp->prev;
        }
    delete(temp);
}
int main()
{
    Node * head = NULL;
    for(int i = 1;i<=5;i++) insertAtTail(head,i);
    deletePos(head,1);
    print(head);
    return 0;
}