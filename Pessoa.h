//Duas boas práticas de programação em c++: Crie uma construtora sem parâmetro e tenha controle do que tem lá
#include <iostream>
#include <stdio.h>

class Pessoa{
    private:
        int dia, mes, ano, idade;
        char nome[30];

    public:
    Pessoa();//Contrutora sem parâmetros, sendo que toda classe deve ter uma função membro construtora sem parâmetro
    Pessoa(int dia, int mes, int ano, const char* nome);
    void Inicializa(int dia, int mes, int ano, const char* nome = "");
    void Calculo_Idade(int dia, int mes, int ano);
    void printIdade();
    int getIdade();
};

