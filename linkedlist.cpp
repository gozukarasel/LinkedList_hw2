#include <iostream>
#include <stdio.h>
#include "linkedlist.h"


linkedlist::linkedlist()
{
    this->head=NULL;
}
void linkedlist::addNode(int data)
{
    node* p = head;
    node* new_node = new node(data);

    if(head == NULL)
    {
        head=new_node;
    }
    else
    {   
        node* p = this->findLastNode();
        p->set_next(new_node);
    }
}
node* linkedlist::findLastNode()
{
    node* p = head;

    while(p->get_next() != NULL)
    {
        p=p->get_next();
    }
    return p;
}