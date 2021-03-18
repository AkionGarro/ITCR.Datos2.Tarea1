#include <iostream>
#include "Node.h"
#include "List.h"
#include "Collector.h"
#include <bits/stdc++.h>
#include<new>

using namespace std;


int main() {
    //Estado actual de las listas al inicio
    List::GetInstance()->listStatus();
    Collector::GetInstance()->collectorStatus();

    //Creacion de nodos con memoria nueva
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);

    //Agregar los nodos a lista
    List::GetInstance()->add_node(n1);
    List::GetInstance()->add_node(n2);
    List::GetInstance()->add_node(n3);
    List::GetInstance()->add_node(n4);

    //Estado actual de las listas
    List::GetInstance()->listStatus();
    Collector::GetInstance()->collectorStatus();


    delete n2;
    //Estado actual de las listas despues de eliminar un nodo y agregarlo al collector
    List::GetInstance()->listStatus();
    Collector::GetInstance()->collectorStatus();


    Node *n5 = new Node();
    List::GetInstance()->add_node(n5);

    List::GetInstance()->listStatus();
    Collector::GetInstance()->collectorStatus();


    return 0;
}
