//
// Created by garroakion on 1/3/21.
//

#include "List.h"
#include "Node.h"
#include<stdlib.h>

using namespace std;

List::List() {
    head = NULL;
}

void List::add_node(Node *n) {
    if (head == NULL) {
        head = n;
    } /*else {
        setHead(n);
    }*/
}

Node *List::setHead(Node *head) {
    Node *temp = new Node(getHead()->getValue());
    this->head = head;
    head->setNext(temp);

}

Node *List::getHead() {
    return head;
}


void List::deleteFirst() {
    Node *temp = head;
    if (temp == NULL) {
        cout << "Empty List" << endl;
    }else{
        this->setHead(this->head->getNext());
        temp->setNext(NULL);
        delete temp;
    }
}

void List::listStatus() {

    if(this->head == NULL){

    }

}





