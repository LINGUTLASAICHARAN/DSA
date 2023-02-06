#include <iostream>
using namespace std;


template<typename E>
class SLinkedList;                      //forward declare the class

template <typename E>
class SNode {					        // singly linked list node
private:
    E elem;					            // linked list element value
    SNode<E>* next;				        // next item in the list
    friend class SLinkedList<E>;		// provide SLinkedList access
};

template <typename E>
class SLinkedList {				        // a singly linked list
public:
    SLinkedList();				        // empty list constructor
    ~SLinkedList();				        // destructor
    bool empty() const;				    // is list empty?
    const E& front() const;			    // return front element
    void addFront(const E& e);			// add to front of list
    void removeFront();				    // remove front item list
    void traverse();                    // traverse the list
private:
    SNode<E>* head;				        // head of the list
};

template <typename E>
SLinkedList<E>::SLinkedList()			// constructor
    : head(NULL) { }

template <typename E>
bool SLinkedList<E>::empty() const		// is list empty?
{ return head == NULL; }

template <typename E>
const E& SLinkedList<E>::front() const	// return front element
{ return head->elem; }

template <typename E>
SLinkedList<E>::~SLinkedList()			// destructor
{ while (!empty()) removeFront(); }

template <typename E>
void SLinkedList<E>::addFront(const E& e) {		// add to front of list
    SNode<E>* v = new SNode<E>;				    // create new node
    v->elem = e;					            // store data
    v->next = head;					            // head now follows v
    head = v;						            // v is now the head
}

template <typename E>
void SLinkedList<E>::removeFront() {			// remove front item
    SNode<E>* old = head;				        // save current head
    head = old->next;					        // skip over old head
    delete old;					        	    // delete the old head
}

template <typename E>
void SLinkedList<E>::traverse(){
    SNode<E> *temp = head;
    while(temp != NULL){
        cout<<temp->elem<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

typedef string Elem;				                // stack element type
class LinkedStack {				                    // stack as a linked list
    public:
        LinkedStack();				                // constructor
        int size() const;				            // number of items in the stack
        bool empty() const;				            // is the stack empty?
        const Elem& top();	                        // the top element
        void push(const Elem& e);  			        // push element onto stack
        void pop();		                        // pop the stack
    private:                          	            // member data
        SLinkedList<Elem> S;			            // linked list of elements
        int n;					                    // number of elements
};

LinkedStack::LinkedStack()
: S(), n(0) { }				                        // constructor

int LinkedStack::size() const
{ return n; }				                        // number of items in the stack

bool LinkedStack::empty() const
{ return n == 0; }				                    // is the stack empty?


const Elem& LinkedStack::top() {		            // get the top element
    if (empty()) cout<<"Top of empty stack\n";
    return S.front();
}

void LinkedStack::push(const Elem& e) {	            // push element onto stack
    ++n;
    S.addFront(e);
}

void LinkedStack::pop() {         // pop the stack
    if (empty()) cout<<"Pop from empty stack\n";
    --n;
    S.removeFront();
}

void printChoices(){
    cout<<"1 : Push\n";
    cout<<"2 : Pop\n";
    cout<<"3 : Get top\n";
    cout<<"4 : Get size of stack\n";
    cout<<"5 : Check if stack is empty\n";
    cout<<"6 : Exit\n";
}

int main(){
    LinkedStack ls = LinkedStack();
    int opt = -1;
    while(opt != 6){
        cin>>opt;
        switch(opt){
            case 1:{
                string aux;
                cin>>aux;
                cout<<"Pushing : "<<aux<<endl;
                ls.push(aux);
                break;
            }
            case 2:{
                cout<<"Attempting pop\n";
                ls.pop();
                break;
            }
            case 3:{
                cout<<"Getting top\n";
                cout<<ls.top()<<endl;
                break;
            }
            case 4:{
                cout<<"Getting size\n";
                cout<<ls.size()<<endl;
                break;
            }
            case 5:{
                cout<<"Stack is "<<(ls.empty()?"":"not ")<<"empty\n";
                break;
            }
            case 6:{
                break;
            }
        }
    }
    
}