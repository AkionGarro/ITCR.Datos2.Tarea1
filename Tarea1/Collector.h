//
// Created by garroakion on 1/3/21.
//

#ifndef TAREA1_COLLECTOR_H
#define TAREA1_COLLECTOR_H
#include "Node.h"


class Collector {

private:
    Node *head;
    friend class Node;

public:

    Collector();
    void add_Node(Node *n);
    Node *setHead(Node *head);
    Node *getHead();
    bool isEmpty();


};


#endif //TAREA1_COLLECTOR_H
