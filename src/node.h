
#pragma once
#include "node.h"
class node
{
    private:
        node* next;
        char data;
    public:
        node(char);
        ~node();
        int get_data();
        node* get_next();
        
        void set_data(int newData);
        void set_next(node* newNext);
};
