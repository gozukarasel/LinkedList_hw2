#include <iostream>
#include <stdio.h>
#include "linkedlist.h"


linkedlist::linkedlist()
{
    this->head = NULL;
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

void linkedlist::reorderList() 
{

    node* temp_node = NULL; // pointer to the last node that was swapped
    bool swapped =true;
    
    if (!head)
    {
        return;
    }
    while(swapped == true)
    {
        node* p = head;
        swapped=!swapped;
        
        while(p->get_next() != temp_node)
        {
            if (p->get_data() > p->get_next()->get_data())
            {
                int temp_data = p->get_data();
                p->set_data(p->get_next()->get_data());
                p->get_next()->set_data(temp_data);
                swapped=true;
            }
            p=p->get_next();
            
        }
        temp_node=p;
    } 
    while (swapped);
} 
void linkedlist::removeDublicates()
{
    node* p = head;
    node* temp_node;
    
    while (p != NULL)
    {
        if (p->get_data() == p->get_next()->get_data() && p->get_next() != findLastNode())
        {   
            temp_node = p->get_next();
            p->set_next(p->get_next()->get_next());
            delete temp_node;
        }
        else if(p->get_data() == p->get_next()->get_data() && p->get_next() == findLastNode())
        {
            temp_node = p->get_next();
            p->set_next(NULL);
            delete temp_node;
        }
        p=p->get_next();
    }
}

void linkedlist::printList()
{
    node* p = head;
    
    while (p != NULL)
    {
        cout<<p->get_data()<<endl;
        p=p->get_next();
    }
}
void linkedlist::reverseList()
{
    node* prev = NULL;
    node* current = head;
    node* next = NULL;

    while (current != NULL)
    {
        next = current->get_next();
        current->set_next(prev);
        prev = current;
        current = next;
    }
    head=prev;
    
}
