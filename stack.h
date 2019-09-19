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
private:
    Node *TOP;
};

#endif // STACK_H
