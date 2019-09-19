#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

class Queue
{
public:
    Queue();
    bool Enqueue(Thing *DAT);
    bool Dequeue(Thing *DAT);
    bool IsEmpty();
private:
    Node *Head;
    Node *Tail;
};

#endif // QUEUE_H
