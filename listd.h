#ifndef LISTD_H
#define LISTD_H
#include<node.h>

class ListD
{
public:
    ListD();
    bool dremove(Thing *DAT, int k);
    bool push(Thing *DAT);
private:
    Node *Head;
};

#endif // LISTD_H
