#include "stack.h"
#include "node.h"

Stack::Stack()
{
    TOP = 0;
}

bool Stack::IsEmpty()
{
    return !TOP;
}

bool Stack::Push(Thing *DAT)
{
    Node *P = Node::MontaNode(DAT);

    if(!P)
        return false;

    P->Next = TOP;
    TOP = P;

    return true;
}

bool Stack::Pop(Thing *DAT)
{
    if(!TOP)
        return false;

    Node *P = TOP;
    TOP = P->Next;
    Node::DesmontaNode(P, DAT);

    return true;
}
