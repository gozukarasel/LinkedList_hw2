#include <iostream>
#include <fstream>
#include <string>
#include "linkedlist.h"


linkedlist* create_linkedlist(linkedlist* s)
{

    ifstream ikra("input.txt");
    char letter;
    
    
    if(ikra.is_open())
    {
        while (ikra.get(letter))
        {
            if(letter != '\n')
            {
                s->addNode(letter);
            }
        };
        s->index();
        ikra.close();
    }
    return s;
}

void homework_1()
{
    linkedlist* s = new linkedlist();

    create_linkedlist(s);
    
    cout<<"before operation 1"<<endl;
    s->printList();

    s->reorderList();

    cout <<"after operation 1"<<endl;
    s->printList();


}

int main()
{
    homework_1();
    
    return EXIT_SUCCESS;
}






