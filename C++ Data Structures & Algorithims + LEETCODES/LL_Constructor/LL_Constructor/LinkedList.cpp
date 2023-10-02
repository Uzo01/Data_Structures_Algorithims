#include "LinkedList.h"


LinkedList::LinkedList(int value)
{
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
}

LinkedList::~LinkedList()
{
    Node* temp = head;
    while (temp != nullptr)
    {
        head = head->next;
        delete temp;
        temp = head;
    }
}

void LinkedList::printList()
{
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

void LinkedList::getHead()
{
    if (head == nullptr) {
        cout << "Head: nullptr" << endl;
    }
    else {
        cout << "Head: " << head->value << endl;
    }
}

void LinkedList::getTail()
{
    if (tail == nullptr) {
        cout << "Tail: nullptr" << endl;
    }
    else {
        cout << "Tail: " << tail->value << endl;
    }
}

void LinkedList::getLength()
{
    cout << "Length: " << length << endl;
}