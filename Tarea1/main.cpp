#include <iostream>
#include "Node.h"
#include "List.h"
#include "Collector.h"

#include<new>

using namespace std;


int main() {


    Node *n1 = new Node(86);
    Node *n2 = new Node(8);
    Node *n3 = new Node(16);
    Node *n4 = new Node(11);



    List::GetInstance()->add_node(n1);
    List::GetInstance()->add_node(n2);
    List::GetInstance()->add_node(n3);
    List::GetInstance()->add_node(n4);
    //Node *n5 = new Node(116);

    List::GetInstance()->listStatus();

    /*Node *ptr= (Node *)(&l1);


   // l1->deleteNode(reinterpret_cast<Node **>(ptr), 16);

   */
     delete n1;

    Collector::GetInstance()->collectorStatus();




    return 0;
}
