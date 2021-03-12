//
// Created by garroakion on 1/3/21.
//

#ifndef TAREA1_LIST_H
#define TAREA1_LIST_H

#include "Node.h"


class List {

protected:
    static List *list_;

private:
    Node *head;

public:
//-------------Singlethon--------------/
    List(List &other) = delete;
    void operator=(const List &) = delete;
    static List *GetInstance();

//-------------Methods--------------/
    List();
    ~List();
    Node *getHead();
    Node *setHead(Node *head);
    void add_node(Node *n);


    void listStatus();
    void deleteNode(Node *node);
    int size(List *list);

};


#endif //TAREA1_LIST_H
