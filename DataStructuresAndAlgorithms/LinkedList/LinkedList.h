#pragma once

class Node
{
public:
    int value;
    Node* next;

    Node(int value);
};

class LinkedList
{
    Node* head;
    Node* tail;
    int length;
public:
    LinkedList(int value);
};
