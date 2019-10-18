#include "listd.h"

ListD::ListD()
{

}
bool ListD::dremove(Thing *DAT, int k)
{
    Node *P = Head;
    if(!P)
        return false;
    while (k != (P->D).key && P->Next != Head) {
        P = P->Next;
    }
    if(k == (P->D).key){
        if(P->Next == P){
            // é unico
            Head = NULL;
        }else {
            (P->Next)->Prev = P->Prev;
            (P->Prev)->Next = P->Next;
            if(P==Head)
                Head = P->Next;
        }
        Node::DesmontaNode(P, DAT);
        return true;
    }
    return false;
}

bool ListD::pop(Thing *DAT, int k)
{
    Node *P = Head;
    while(P && (P->D).key != k){
        P=P->Next;
    }
    if(!P)
        return false;
    if(P->Prev){
        //tem anterior
        (P->Prev)->Next = P->Next;
    }else{
        Head = P->Next;
    }

    if(P->Next){
        //tem proximo
        (P->Next)->Prev = P->Prev;
    }else{
        Tail = P->Prev;
    }
    Node::DesmontaNode(P, DAT);
    IT
}

//TERMINAR ListD::push(Thing *DAT)
bool ListD::push(Thing *DAT)
{
    int k = DAT->key;
    Node *P = Node::MontaNode(DAT);
    if(!P){
        return false;
    }
    //se ordanada -> buscar inserir
    //senão insere em head
    if(!Head)
        P->Prev = Head->Prev;
    P->Prev = Head->Prev;
    P->Next = Head;
    (Head->Prev)->Next = P;
    Head->Prev = P;
    Head = P;
    return true;
}
