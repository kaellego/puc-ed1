#include<iostream>
#include "queue.h"
#include "stack.h"

using namespace std;

int main()
{
    Thing t;
    Queue q;
    Stack s;

    t.setNome("Well");
    t.setIdade(25);
    cout << t.getNome() << "\t" << t.getIdade();

}
