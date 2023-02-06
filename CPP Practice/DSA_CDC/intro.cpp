#include <iostream>
using namespace std;
template <class T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data);
};
template <class T>
Node<T>::Node(T data)
{
    this->data = data;
    next = NULL;
}
template <class T>
class LinkedList
{

public:
    Node<T> *head;
    Node<T> *tail;
    LinkedList();
    void addAtHead(T newdata);
    void addAtTail(T newdata);
    void print();
};

template <class T>
LinkedList<T>::LinkedList()
{
    head = tail = NULL;
}
template <class T>
void LinkedList<T>::addAtHead(T d)
{
    Node<T> *newnode = new Node<T>(d);
    newnode->data=d;
    newnode->next = head;
    head = newnode;
    if (newnode->next == NULL)
        tail = head;
}
template <class T>
void LinkedList<T>::addAtTail(T newdata)
{
    Node<T> *newNode = new Node<T>(newdata);
    if (tail == NULL)
    {
        tail = newNode;
    }
    else{
    tail ->next = newNode;
    tail = newNode;
    }
    if (newNode->next == NULL)
        head = tail;
}
template <class T>
void LinkedList<T>::print(void)
{
    
    
    for (Node<T> *pointer = head; pointer != NULL; pointer = pointer->next)
    {        
        cout << pointer->data << " ";
    }
    cout << endl;
}
int main()
{
    LinkedList<string> myLinkedList;
    myLinkedList.addAtHead("1");
    myLinkedList.addAtHead("2");
    myLinkedList.addAtHead("3");
    myLinkedList.addAtHead("4");
    myLinkedList.print();
    return 0;
}