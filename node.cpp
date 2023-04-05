#include <stdio.h>
#include "Node.h"

node::node(char data)
{
    this->data=data;
    this->next=NULL;
    this->index=index;
}
node::~node()
{

};

int node::get_index()
{
    return this->index;
}



int node::get_data() 
{
    return this->data;
};

node* node::get_next()
{
    return this->next;
};

void node::set_data(int neWdata)
{
    this->data =neWdata;
};

void node::set_next(node* newNext)
{
    this->next=newNext;
};

void node::set_index(int neWindex)
{
    this->index =neWindex;
}
