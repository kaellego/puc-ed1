#include "node.h"

Node* Node::MontaNode(Thing *DAT)
{
    Node*P=new Node;
    if(P)
    {
        P->D=*DAT;
        P->Next=0;
    }
    return P;
}

void Node::DesmontaNode (Node *P,Thing *DAT)
{
    if(P)
    {
        *DAT=P->D;
        delete P;
    }
}
