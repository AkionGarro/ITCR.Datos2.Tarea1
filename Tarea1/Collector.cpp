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