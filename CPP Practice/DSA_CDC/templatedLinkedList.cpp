#include <iostream>
using namespace std;
template<class T>
class LinkedList;

template <class T>
class Node
{
    T data;
    Node<T> *next;
public:
    Node(T data);
    template<class Y>
    friend class LinkedList;
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

    Node<T> *head;
    Node<T> *tail;

public:
    LinkedList();
    void addAtHead(T newData);
    void addAtTail(T newData);
    void print();
};

template <class T>
LinkedList<T>::LinkedList()
{
    head = tail = NULL;
}
template <class T>
void LinkedList<T>::addAtHead(T newData)
{
    Node<T> *newnode = new Node<T>(newData);
    newnode->next = head;
    head = newnode;
    if (newnode->next == NULL){
        tail = head;
    }
}
template <class T>
void LinkedList<T>::addAtTail(T newdata)
{
    Node<T> *newNode = new Node<T>(newdata);
    if (tail == NULL)
        {
            tail = newNode;
            head = tail;
        }
    else
        {
            tail->next = newNode;
            tail = newNode;
        }
}
template <class T>
void LinkedList<T>::print(void)
{

    for (Node<T> *pointer = head; pointer != NULL; pointer = pointer->next){
        cout<<pointer -> data<< " ";
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
    myLinkedList.addAtTail("added at tail");
    myLinkedList.print();
    return 0;
}