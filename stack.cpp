#include "stack.h"
#include "node.h"


//pilha
Stack::Stack()
{
    TOP = 0;
}

bool Stack::isEmpty()
{
    return !TOP;
}

bool Stack::push(Thing *DAT)
{
    Node *P = Node::MontaNode(DAT);

    if(!P)
        return false;

    P->Next = TOP;
    TOP = P;

    return true;
}

bool Stack::pop(Thing *DAT)
{
    if(!TOP)
        return false;

    Node *P = TOP;
    TOP = P->Next;
    Node::DesmontaNode(P, DAT);

    return true;
}

void printAll()
{
    Node *aux = TOP;
}
void printAllr(Node *aux);
