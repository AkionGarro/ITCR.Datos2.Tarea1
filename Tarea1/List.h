//
// Created by garroakion on 1/3/21.
//

#ifndef TAREA1_LIST_H
#define TAREA1_LIST_H

#include "Node.h"


class List {
protected:
    static List* list_;
private:
    Node *head;
public:

    List(List &other) = delete;
    void operator=(const List &) = delete;
    static List *GetInstance();

    List();

    ~List();

    Node *getHead();

    Node *setHead(Node *head);

    void add_node(Node *n);

    bool isEmpty();

    void deleteFirst();

    void listStatus();
    //void deleteNode(Node** head_ref, int key);
};


#endif //TAREA1_LIST_H
