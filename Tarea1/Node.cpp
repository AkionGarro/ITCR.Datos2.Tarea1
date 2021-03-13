//
// Created by garroakion on 1/3/21.
//
#include <iostream>
#include "Node.h"
#include "Collector.h"
#include "List.h"


using namespace std;


//------------------------------Constructors--------------------------------
Node::Node() {
    value = 0;
    next = NULL;
}

Node::Node(int val) {
    value = val;
    next = NULL;
}

//------------------------------Destructor--------------------------------

Node::~Node() {

}

//-------------------------------Methods----------------------------------

Node *Node::getNext() {
    return next;
}

int Node::getValue() {
    return value;
}


void Node::setNext(Node *next) {
    this->next = next;
}

void Node::setValue(int value) {
    this->value = value;
}


//------------------Overloading New & Delete Operators------------------------

void *Node::operator new(std::size_t size) {
    if (Collector::GetInstance()->getHead() == nullptr) {
        void *p = ::new Node();
        cout<<"Creacion de nodo con memoria nueva"<<endl;
        return p;
    } else {
        /*Node *n = Collector::GetInstance()->getHead();
        n->setValue(size);
        Collector::GetInstance()->deleteNode((Collector::GetInstance()->getHead()));
        return n;*/
    }

}

void Node::operator delete(void *p) {
    List::GetInstance()->deleteNode((Node *) p);
    Node *temp = (Node *) p;
    temp->setNext(NULL);
    Collector::GetInstance()->add_node(temp);
    cout<<"Se agrego el nodo al Collector y se elimino de la lista"<<endl;


}

