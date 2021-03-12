//
// Created by garroakion on 1/3/21.
//

#include "List.h"
#include "Node.h"
#include<stdlib.h>
using namespace std;

//------------------------Singlethon Implementation------------------------------

List *List::list_ = nullptr;
List *List::GetInstance() {

    if (list_ == nullptr) {
        list_ = new List();
    }
    return list_;
}

//------------------------------Methods--------------------------------

List::List() {
    head = NULL;
}

void List::add_node(Node *n) {
    if (head == NULL) {
        this->head = n;
    } else {
        setHead(n);
    }
}

Node *List::setHead(Node *head) {
    head->setNext(this->head);
    this->head = head;
}

Node *List::getHead() {
    return head;
}



void List::listStatus() {
    if (this->head == NULL) {
        cout << "List: [ ]" << endl;
    } else {
        Node *tmp = this->head;
        cout << "LinkedList: [";
        while (tmp->getNext() != nullptr) {
            cout << tmp->getValue() << "->";
            tmp = tmp->getNext();
        }
        cout << tmp->getValue() << "] \n\n";
    }

}



void List::deleteNode(Node *nodeDelete) {
    int top = List::size(List::GetInstance());
    Node *current = List::GetInstance()->getHead();
    Node *previous = new Node();
    previous = NULL;

    for (int i = 0; i < top; i++) {

        if (List::GetInstance()->getHead()==nodeDelete && previous == NULL) {
            current = current->getNext();
            List::GetInstance()->head = current;
            break;
        }

        if (current != nodeDelete && current->getNext() == nullptr) {
            cout << "No se encuentra el nodo"<<endl;
        }
        if (current == nodeDelete) {
            previous->setNext(current->getNext());
        } else {
            previous = current;
            current = current->getNext();
        }
    }
    return;



}

int List::size(List *list) {
    int i = 0;
    Node *ptr = list->getHead();
    while (ptr != nullptr) {
        ptr = ptr->getNext();
        i++;
    }
    return i;

}




