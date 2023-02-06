#include <bits/stdc++.h>
class Node
{
public:
    int val;
    Node *next;
    Node();
    Node(int value);
    Node(int value, Node *nxtPointer);
};
Node::Node()
{
    val = 0;
    next = NULL;
}
Node::Node(int value)
{
    val = value;
    next = NULL;
}
Node::Node(int value, Node *nxtPointer)
{
    val = value;
    next = nxtPointer;
}
class SinglyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    SinglyLinkedList();
    void insertEnd(const int &newDataItem);
    void insertSorted(Node *&toInsert);
    Node *getHead();
    Node *getTail();
    void printForward();
    void merge(SinglyLinkedList &l);
    SinglyLinkedList reorder();
};
SinglyLinkedList::SinglyLinkedList()
{
    head = NULL;
    tail = NULL;
}
// Inserts node with newDataItem at the end of the list
void SinglyLinkedList::insertEnd(const int &newDataItem)
{
    if (head == NULL)
    {
        head = new Node(newDataItem);
        tail = head;
    }
    else
    {
        Node *temp = new Node(newDataItem);
        tail->next = temp;
        tail = tail->next;
    }
}
// Inserts node toInsert before the first node in the list that is larger
// than val in toInsert
// Thus, if only this method is used to populate a list, the list will
// remain in sorted order
void SinglyLinkedList::insertSorted(Node *&toInsert)
{

    // FILL IN CODE HERE

    Node *curPointer = head;
    if (curPointer == NULL)
    {
        head = toInsert;
        tail = head;
        return;
    }
    else if (toInsert->val < head->val)
    {
        toInsert->next = head;
        head = toInsert;
        return;
    }
    while (curPointer->next != NULL && toInsert->val > curPointer->next->val)
        curPointer = curPointer->next;
    if (curPointer->next == NULL)
    {
        curPointer->next = toInsert;
        tail = toInsert;
        return;
    }
    Node *temp = curPointer->next;
    curPointer->next = toInsert;
    toInsert->next = temp;
}
Node *SinglyLinkedList::getHead()
{
    return head;
}
Node *SinglyLinkedList::getTail()
{
    return tail;
}
void SinglyLinkedList::printForward()
{
    Node *curPointer = head;
    while (curPointer != NULL)
    {
        std::cout << curPointer->val << " ";
        curPointer = curPointer->next;
    }
    std::cout << std::endl;
}
void SinglyLinkedList::merge(SinglyLinkedList &l)
{
    tail->next = l.getHead();
    tail = l.getTail();
}
// This method transforms the list as indicated in the question.
// Hint: It can call the insertSorted method, implemented previously
SinglyLinkedList SinglyLinkedList::reorder()
{
    SinglyLinkedList even, odd;
    Node *curPointer = head;

    // FILL IN CODE HERE

    while (curPointer != NULL)
    {
        Node *nextNode = curPointer->next;
        curPointer->next = NULL;
        if ((curPointer->val) % 2)
        {
            odd.insertSorted(curPointer);
        }
        else
        {
            even.insertSorted(curPointer);
        }
        curPointer = nextNode;
    }
    // END of FILL IN CODE
    odd.merge(even);
    return odd;
}
int main()
{
    int n;
    std::cin >> n;
    SinglyLinkedList list;
    for (int i = 0; i < n; i++)
    {
        int input;
        std::cin >> input;
        list.insertEnd(input);
    }
    SinglyLinkedList finalList = list.reorder();
    finalList.printForward();
}
