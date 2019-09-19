#include "thing.h"

Thing::Thing()
{

}

void Thing::setNome(string nome)
{
    Nome = nome;
}

void Thing::setIdade(int idade)
{
    Idade = idade;
}

string Thing::getNome()
{
    return Nome;
}

int Thing::getIdade()
{
    return Idade;
}
