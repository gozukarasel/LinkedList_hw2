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

void linkedlist::index()
{
    node* p = head;

    int index=1;

    while(p->get_next() != NULL)
    {
        p->set_index(index);
        index ++;
        p=p->get_next();
    };
    
    p->set_index(index); // p->get_next = tail;
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

    node* p = head;
    node* temp_node = findLastNode();
    int counter =  temp_node->get_index();

    for (int step = 0; step<(counter - 1); ++step)
    {
        int swapped = 0;
        
        for(int i=0; i< counter-step-1; i++)
        {
            if(p->get_data() > p->get_next()->get_data())
            {
                node* tempnode = p;
                p = p->get_next();
                p->set_next(tempnode);
                swapped = 1;
            }
            
        }
        if(swapped == 0)
        {
            break;
            cout<<"list is sorted";
        }

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

