#ifndef LISTD_H
#define LISTD_H
#include<node.h>

class ListD
{
public:
    ListD();
    bool dremove(Thing *DAT, int k);
    bool push(Thing *DAT);
    bool pop(Thing *DAT, int k);
private:
    Node *Head;
    Node *Tail;
};

#endif // LISTD_H
