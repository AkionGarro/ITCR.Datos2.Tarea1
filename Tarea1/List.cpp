//
// Created by garroakion on 1/3/21.
//

#include "List.h"
#include "Node.h"
#include<stdlib.h>

using namespace std;
List* List::list_= nullptr;

List *List::GetInstance()
{

    if(list_==nullptr){
        list_ = new List();
    }
    return list_;
}
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
    if(this->head==NULL){
        cout<<"List: [ ]"<<endl;
    }else{
        Node *tmp = this->head;
        cout<< "LinkedList: [";
        while(tmp->getNext()!= nullptr){
            cout<<tmp->getValue()<<"->";
            tmp = tmp->getNext();
        }
        cout<<tmp->getValue()<<"] \n\n";
    }

}
/*
void List::deleteNode(Node** head_ref, int key)
{

    Node* temp = *head_ref;
    Node* prev = NULL;

    if (temp != NULL && temp->getValue() == key)
    {
        *head_ref = temp->getNext();
        delete temp;
        return;
    }

    else
    {
        while (temp != NULL && temp->getValue() != key)
        {
            prev = temp;
            temp = temp->getNext();
        }

        // If key was not present in linked list
        if (temp == NULL)
            return;

        // Unlink the node from linked list
        prev->setNext(temp->getNext());

        // Free memory
        delete temp;
    }
}
*/



