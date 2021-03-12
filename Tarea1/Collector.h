//
// Created by garroakion on 1/3/21.
//

#ifndef TAREA1_COLLECTOR_H
#define TAREA1_COLLECTOR_H
#include "Node.h"


class Collector {

protected:
    static Collector* collector_; //Singlethon
private:
    Node *head;
    friend class Node;

public:

    Collector(Collector &other) = delete;
    void operator=(const Collector &) = delete;
    static Collector *GetInstance();

    Collector();
    void add_node(Node *n);
    Node *setHead(Node *head);
    Node *getHead();
    bool isEmpty();
    void collectorStatus();



};


#endif //TAREA1_COLLECTOR_H
