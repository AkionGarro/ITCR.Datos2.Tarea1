//
// Created by garroakion on 1/3/21.
//

#include "Collector.h"
#include "Node.h"

//---------------------Singlethon Implementation--------------------------
Collector* Collector::collector_= nullptr;

Collector *Collector::GetInstance()
{

    if(collector_==nullptr){
        collector_ = new Collector();
    }
    return collector_;
}

//------------------------------Constructor--------------------------------
Collector::Collector() {
    head = NULL;
}

//------------------------------Methods--------------------------------
void Collector::add_node(Node *n) {
    if (head == NULL) {
        head = n;
    } else {
        setHead(n);
    }
}

Node *Collector::setHead(Node *head) {
    head->setNext(this->head);
    this->head = head;
}

Node * Collector::getHead() {
    return head;
}


void Collector::collectorStatus() {
    if(this->head==NULL){
        cout<<"Collector: [ ]"<<endl;
    }else{
        Node *tmp = Collector::GetInstance()->getHead();
        cout<< "Collector: [";
        while(tmp->getNext()!= nullptr){
            cout<<tmp->getValue()<<"->";
            tmp = tmp->getNext();
        }
        cout<<tmp->getValue()<<"] \n\n";
    }

}


void Collector::deleteNode(Node *nodeDelete) {
    int top = Collector::size(Collector::GetInstance());
    Node *current = Collector::GetInstance()->getHead();
    Node *previous = new Node();
    previous = NULL;

    for (int i = 0; i < top; i++) {

        if (Collector::GetInstance()->getHead()==nodeDelete && previous == NULL) {
            current = current->getNext();
            Collector::GetInstance()->head = current;
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

int Collector::size(Collector *collector) {
    int i = 0;
    Node *ptr = collector->getHead();
    while (ptr != nullptr) {
        ptr = ptr->getNext();
        i++;
    }
    return i;

}
