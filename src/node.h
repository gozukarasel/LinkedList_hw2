
#pragma once
#include "node.h"

class node
{
    private:
        node* next;
        char data;
        int index;
    public:
        node(char);
        ~node();
        int get_data();
        node* get_next();
        int get_index();
        
        void set_index(int neWindex);
        void set_data(int newData);
        void set_next(node* newNext);
};
