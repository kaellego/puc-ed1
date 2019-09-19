#ifndef STACK_H
#define STACK_H

#include "node.h"

class Stack
{
public:
    Stack();
    bool isEmpty();
    bool push(Thing *DAT);
    bool pop(Thing *DAT);
    void printAll();
    void printAllr(Node *aux);
private:
    Node *TOP;
};

#endif // STACK_H
