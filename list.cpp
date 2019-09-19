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
bool List::search(int k, Thing *DAT)
{
    Node *P = Head;

    while(P && (P->D).getIdade() != k){
        P = P->Next;
    }

    if(P){
        *DAT = P->D;
        return true;
    }

    return false;
}

void List::printAll()
{

}
