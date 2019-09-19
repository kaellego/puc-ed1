#ifndef LIST_H
#define LIST_H
#include<node.h>

class List
{
public:
    List();
    bool insert(Thing *DAT);
    void printAll();
private:
    Node *Head;
    //Node *Tail;
};

#endif // LIST_H
