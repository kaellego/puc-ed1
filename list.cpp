#include "list.h"

List::List()
{

}

bool List::insert(Thing *DAT)
{
    Node *P = Node::MontaNode(DAT);
    if(!P)
        return false;
    P->Next = Head;
    Head = P;
    return true;
}
void List::printAll()
{}
