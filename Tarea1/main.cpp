#include <iostream>
#include "Node.h"
#include "List.h"
#include<new>

using namespace std;


int main() {

    List *l1 = new List();
    Node *n2 = new Node(86);
    Node *n3 = new Node(8);
    Node *n4 = new Node(16);

    l1->add_node(n3);
    //l1->add_node(n4);
    //l1->add_node(n2);
    cout << l1->getHead()->getValue() << endl;
    //cout << l1->getHead()->getNext() << endl;
    //cout << l1->getHead()->getNext()->getNext() << endl;
    return 0;
}
