#include "queue.h"
#include "node.h"

Queue::Queue()
{
    Head=Tail=NULL;
}

bool Queue::IsEmpty()
{
    return !Head;
}

bool Queue::Dequeue(Thing *DAT)
{
    if(!Head)
        return false;
    Node *P=Head;
    Head=Head->Next;
    Node::DesmontaNode(P,DAT);
    if(!Head)
        Tail=NULL;
    return true;
}
