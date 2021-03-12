#include <iostream>
#include "Node.h"
#include "List.h"
#include "Collector.h"

#include<new>

using namespace std;


int main() {



    List *l1 = new List();
    Node *n1 = new Node(86);
    Node *n2 = new Node(8);
    Node *n3 = new Node(16);
    Node *n4 = new Node(11);

    l1->add_node(n1);
    l1->add_node(n2);
    l1->add_node(n3);
    l1->add_node(n4);
    Node *n5 = new Node(116);


    delete n1;



    l1->listStatus();
    Collector::GetInstance()->collectorStatus();



    return 0;
}
