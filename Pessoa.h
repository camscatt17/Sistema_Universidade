//Duas boas práticas de programação em c++: Crie uma construtora sem parâmetro e tenha controle do que tem lá
#pragma once
#include <iostream>
#include <stdio.h>
#include "Universidade.h"

class Pessoa{
    private:
        int dia, mes, ano, idade;
        char nome[30];

        Universidade* universidadeFiliada; //A classe Universidade está associada à classe Pessoa através de um ponteiro
        //Sendo que o ponteiro universidade é apenas uma referência a um objeto associado

    public:
    Pessoa();//Contrutora sem parâmetros, sendo que toda classe deve ter uma função membro construtora sem parâmetro
    Pessoa(int dia, int mes, int ano, const char* nome);
    void Inicializa(int dia, int mes, int ano, const char* nome = "");
    void calculoIdade(int dia, int mes, int ano);
    void printIdade();
    int getIdade();

    //Métodos que permitem a associação entre as classes Universidade e Pessoa
    void setUniversidadeFiliada(Universidade* universidadeFiliada);
    void localTrabalho();
};

