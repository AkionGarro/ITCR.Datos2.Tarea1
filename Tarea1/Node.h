//
// Created by garroakion on 1/3/21.
//

#ifndef TAREA1_NODE_H
#define TAREA1_NODE_H

#include <iostream>




using namespace std;

class Node {

private:
    int value;
    Node *next;


public:
    //Constructors
    Node();

    Node(int val);

    //Destructor
    ~Node();


    //Getters
    int getValue();

    Node *getNext();

    //Setters
    void setNext(Node *next);

    void setValue(int value);

    //New & Delete
    void *operator new(size_t size);

    void operator delete(void *p);


};

#endif //TAREA1_NODE_H
