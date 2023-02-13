
#include <iostream>
#include <stdio.h>

class Pessoa{
    private:
        int dia, mes, ano, idade;
        char nome[30];

    public:
    //As funções de uma classe são chamadas de métodos ou ainda operações
    //A extensão .h passa a armazenar apenas as definições dos métodos
    Pessoa(int dia, int mes, int ano, const char* nome);
    void Calculo_Idade(int dia, int mes, int ano);
    void printIdade();
    int getIdade();
};

