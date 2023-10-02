#pragma once
#include <iostream>

using namespace std;

class Node 
{
public:
    int value; // nuber driven value assigned to node
    Node* next; //Node pointer point to next

    Node(int value)
    {
        this->value = value; // value in construstor para assigned to value above
        next = nullptr; // has no parameter to be assigned to 
    }
};
