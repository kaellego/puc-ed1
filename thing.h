#ifndef THING_H
#define THING_H
#include<string>

using namespace std;

class Thing
{
public:
    Thing();
    void setNome(string nome);
    void setIdade(int idade);
    string getNome();
    int getIdade();
private:
    string Nome;
    int Idade;
};

#endif // THING_H
