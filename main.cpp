#include <iostream>
#include <fstream>
#include <string>
#include "linkedlist.h"


using namespace std;

void homework1_linked_list();

void homework1_linkedl_list()
{
    linkedlist* s = new linkedlist();
    
    s->addNode(7);
    s->addNode(8);
    s->addNode(9);

}

int main()
{
    homework1_linked_list();
    return EXIT_SUCCESS;
}