//
// Created by garroakion on 1/3/21.
//

#ifndef TAREA1_LIST_H
#define TAREA1_LIST_H

#include "Node.h"


class List {

private:
    Node *head;
public:
    List();

    ~List();

    Node *getHead();

    Node *setHead(Node *head);

    void add_node(Node *n);

    bool isEmpty();

    void deleteFirst();

    void listStatus();
};


#endif //TAREA1_LIST_H
