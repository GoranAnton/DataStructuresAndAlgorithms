#include "LinkedList.h"

Node::Node(int value)
{
    this->value = value;
    this->next = nullptr;
}

LinkedList::LinkedList(int value)
{
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}
