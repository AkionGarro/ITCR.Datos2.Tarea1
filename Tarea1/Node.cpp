//
// Created by garroakion on 1/3/21.
//
#include <iostream>
#include "Node.h"
#include "Collector.h"


using namespace std;


//Constructors
Node::Node() {
    value = 0;
    next = NULL;
}

Node::Node(int val) {
    value = val;
    next = NULL;
}

//Destructor

Node::~Node() {

}

//Getters

Node *Node::getNext() {
    return next;
}

int Node::getValue() {
    return value;
}

//Setters

void Node::setNext(Node *next) {
    this->next = next;
}

void Node::setValue(int value) {
    this->value = value;
}


//New & Delete operators

void *Node::operator new(std::size_t size) {
    if(Collector::GetInstance()->getHead()== nullptr){
        void *p = ::new Node();
        return p;
    }else{
        cout<<"Si se agrego el nodo al colector";
        /*  Collector::GetInstance()->collectorStatus();
          void *p = ::new Node();
          return p;*/
    }



}

void Node::operator delete(void *p) {
    Collector::GetInstance()->add_node((Node*)p);

}

