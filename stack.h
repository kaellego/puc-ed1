#ifndef STACK_H
#define STACK_H

#include "node.h"

class Stack
{
public:
    Stack();
    bool IsEmpty();
    bool Push(Thing *DAT);
    bool Pop(Thing *DAT);
private:
    Node *TOP;
};

#endif // STACK_H
