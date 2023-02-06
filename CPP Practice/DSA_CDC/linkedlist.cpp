#include <iostream>
using namespace std;

class StringNode
{
private:
    string elem;
    StringNode *next;
    friend class StringLinkedList;
    
    
};

class StringLinkedList
{
    int cout = 0;
    StringNode *head;

public:
    StringLinkedList();
    bool empty();
    string front();
    void addFront(string a);
    void removeFront();
    void removeLast();
    void insertEnd(string last);
    void print();
};
StringLinkedList ::StringLinkedList() : head(NULL) {}
bool StringLinkedList::empty()
{
    return head == NULL;
}
string StringLinkedList::front()
{
    return head->elem;
}
void StringLinkedList ::addFront(string a)
{
    StringNode *nex = new StringNode;
    nex->elem = a;
    nex->next = head;
    head = nex;
}

void StringLinkedList ::removeFront()
{
    StringNode *old = head;
    head = head->next;
    delete old;
}

void StringLinkedList ::print(){
    StringNode *temp = head;
    while (temp != NULL)
    {
      std:: cout << temp->elem << " ";
      temp = temp ->next;
    }
    
   std :: cout << endl;
   
}
void StringLinkedList::insertEnd(string last){
    StringNode * newnode = new StringNode;
    newnode->elem = last;
    newnode->next = NULL;
    StringNode * temp = head;
    while(true){
        if(temp == NULL){
            head = newnode;
            return;
        }
       else if (temp->next== NULL)
        {
           temp->next = newnode;
           return;
        }
        temp = temp->next;
    }
}
void StringLinkedList::removeLast(){
    StringNode * temp = head;
    if (temp == NULL ) return;
    if(temp ->next == NULL) {delete temp; return;}
    while(temp->next->next != NULL)
            temp = temp->next;
    
    delete (temp->next);
    temp->next = NULL;
    return;

}

int main()
{
 
    StringLinkedList l2;
    l2.addFront("1");
    l2.addFront("2");
    l2.insertEnd("3");
    l2.insertEnd("4");
    l2.addFront("44");
    l2.print();
   
    return 0;
}