#ifndef NODE_H
#define NODE_H
#include "thing.h"

class Node
{
public:
    Thing D;
    Node *Next;
    static Node* MontaNode(Thing *DAT);
    static void DesmontaNode(Node *P, Thing *DAT);
};

#endif // NODE_H
