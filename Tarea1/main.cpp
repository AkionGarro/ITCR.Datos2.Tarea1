#include <iostream>
#include "Node.h"
#include "List.h"
#include "Collector.h"
#include <bits/stdc++.h>
#include<new>

using namespace std;


int main(){
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);

    List::GetInstance()->add_node(n1);
    List::GetInstance()->add_node(n2);
    List::GetInstance()->add_node(n3);
    List::GetInstance()->add_node(n4);

    List::GetInstance()->listStatus();
    Collector::GetInstance()->collectorStatus();

    List::GetInstance()->deleteNode(n4);
    delete n4;
    List::GetInstance()->listStatus();
    Collector::GetInstance()->collectorStatus();







    return 0;
}
