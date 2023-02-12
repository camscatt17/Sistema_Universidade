
#include <iostream>
#include <stdio.h>


//No lugar de struct, em C++ é mais usual utilizar a estrutura Class
//Em uma Class, os elementos são private por default

class Pessoa{
    private:
        //As variáveis de uma classe são chamadas de atributos
        int dia;
        int mes;
        int ano;
        int idade;
        char nome[30];

    public:
    //As funções de uma classe são chamadas de métodos ou ainda operações
    //A extensão .h passa a armazenar apenas as definições dos métodos
    Pessoa(int dia, int mes, int ano, const char* nome);
    void Calculo_Idade(int dia, int mes, int ano);
    int getIdade();
};

