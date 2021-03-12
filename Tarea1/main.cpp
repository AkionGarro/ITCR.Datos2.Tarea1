#include <iostream>
#include "Node.h"
#include "List.h"
#include "Collector.h"
#include <bits/stdc++.h>
#include<new>

using namespace std;


int main() {


    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(6);
    Node *n7 = new Node(7);
    Node *n8 = new Node(8);

    List::GetInstance()->add_node(n1);
    List::GetInstance()->add_node(n2);
    List::GetInstance()->add_node(n3);
    List::GetInstance()->add_node(n4);
    List::GetInstance()->add_node(n5);
    List::GetInstance()->add_node(n6);
    List::GetInstance()->add_node(n7);
    List::GetInstance()->add_node(n8);

    List::GetInstance()->listStatus();
    cout<<List::GetInstance()->size(List::GetInstance())<<endl;


    List::GetInstance()->deleteNode(n1);
    List::GetInstance()->listStatus();
    Collector::GetInstance()->collectorStatus();
/*

    delete n4;


*/


    return 0;
}
