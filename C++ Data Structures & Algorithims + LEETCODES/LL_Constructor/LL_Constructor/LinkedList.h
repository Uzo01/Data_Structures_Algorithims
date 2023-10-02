#pragma once
#include "Node.h"

class LinkedList {
private:
    Node* head; // Node point to head - next is assigned to head fropm node
    Node* tail;
    int length;

public:
    LinkedList(int value);//linkedlist constructor to create new node


    ~LinkedList(); // Desconstrutor is to delete the memory stored

    void printList(); 
    void getHead();
    void getTail();
    void getLength();

};