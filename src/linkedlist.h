#pragma once
#include "node.h"

class linkedlist
{
private:
    node* head;
public:
    linkedlist();
    ~linkedlist();
    
    node* findLastNode();
    void addNode(int);
    void reorderList();
    void removeDublicates();
    void reverseList();
};


