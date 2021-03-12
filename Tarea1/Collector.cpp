//
// Created by garroakion on 1/3/21.
//

#include "Collector.h"
#include "Node.h"

Collector* Collector::collector_= nullptr;

Collector *Collector::GetInstance()
{

    if(collector_==nullptr){
        collector_ = new Collector();
    }
    return collector_;
}

Collector::Collector() {
    head = NULL;
}

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

bool Collector::isEmpty() {
    bool flag = false;
    if (head==NULL){
        flag = true;
    }else{
        flag= false;
    }
    return flag;
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