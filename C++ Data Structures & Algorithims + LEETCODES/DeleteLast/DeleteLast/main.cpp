#include <iostream>

using namespace std;


class Node {
public:
    int value;
    Node* next;

    Node(int value) {
        this->value = value;
        next = nullptr;
    }
};


class LinkedList {
private:
    Node* head;
    Node* tail;
    int length;

public:
    LinkedList(int value) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    ~LinkedList() {
        Node* temp = head;
        while (head) {
            head = head->next;
            delete temp;
            temp = head;
        }
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void getHead() {
        if (head == nullptr) {
            cout << "Head: nullptr" << endl;
        }
        else {
            cout << "Head: " << head->value << endl;
        }
    }

    void getTail() {
        if (tail == nullptr) {
            cout << "Tail: nullptr" << endl;
        }
        else {
            cout << "Tail: " << tail->value << endl;
        }
    }

    void getLength() {
        cout << "Length: " << length << endl;
    }

    void append(int value) {
        Node* newNode = new Node(value);
        if (length == 0) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }

    void deleteLast()
    {
        if (length == 0) return;
        Node* temp = head;
        if (length == 1) // head and tail is still pointing to node to reset set to nullptr
        {
            head = nullptr;
            tail = nullptr;
        }
       
        else  // while loop set condition for allowing temp and pre to move through condtions
        {
            Node* pre = head;
            while (temp->next)
            {
                pre = temp; //when moving set pre to temp
                temp = temp->next; //move temp until last node
            }
            tail = pre; // set the tail to the node at pre
            tail->next = nullptr; // set the next to null point detaching the last node
        }
        length--; // deincreament the length
       
        delete temp;
    }

};



int main() {

    LinkedList* myLinkedList = new LinkedList(1);
    myLinkedList->append(2);


    cout << "LL before deleteLast():\n";
    myLinkedList->printList();


    myLinkedList->deleteLast();
    cout << "\n\nLL after 1st deleteLast():\n";
    myLinkedList->printList();


    myLinkedList->deleteLast();
    cout << "\n\nLL after 2nd deleteLast():\n";
    myLinkedList->printList();


    myLinkedList->deleteLast();
    cout << "\n\nLL after 3rd deleteLast():\n";
    myLinkedList->printList();


    /*
        EXPECTED OUTPUT:
        ----------------
        LL before deleteLast():
        1
        2


        LL after 1st deleteLast():
        1


        LL after 2nd deleteLast():


        LL after 3rd deleteLast():

    */

}

