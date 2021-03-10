#include <iostream>
#include "Node.h"
#include "List.h"
#include "Collector.h"

#include<new>

using namespace std;


int main() {


    List *l1 = new List();
    Collector *c1 = new Collector();
    Node *n1 = new Node(86);
    Node *n2 = new Node(8);
    Node *n3 = new Node(16);

    l1->add_node(n1);
    l1->add_node(n2);
    l1->add_node(n3);

    cout << l1->getHead()->getValue() << endl;
    cout << l1->getHead()->getNext()->getValue() << endl;
    cout << l1->getHead()->getNext()->getNext()->getValue() << endl;

    return 0;
}
