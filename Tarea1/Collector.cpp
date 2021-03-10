//
// Created by garroakion on 1/3/21.
//

#include "Collector.h"
#include "Node.h"


Collector::Collector() {
    head = NULL;
}

void Collector::add_Node(Node *n) {
    if (head == NULL) {
        head = n;
    } else {
        setHead(n);
    }
}

Node *Collector::setHead(Node *head) {
    Node *temp = new Node(getHead()->getValue());
    this->head = head;
    head->setNext(temp);

}

Node * Collector::getHead() {
    return head;
}

bool Collector::isEmpty() {
    bool flag = false;
    if (head==NULL){
        flag = true;
    }else{
        flag= false;
    }
    return flag;
}

