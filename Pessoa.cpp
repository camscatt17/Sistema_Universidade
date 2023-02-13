#include "Pessoa.h"
#include <string.h>
#include <iostream>

using namespace std;

Pessoa::Pessoa(){
    Inicializa(0,0,0);
}

Pessoa::Pessoa(int dia, int mes, int ano, const char* nome){
    Inicializa(dia, mes, ano, nome);
}

void Pessoa::Inicializa(int dia, int mes, int ano, const char* nome){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
    this->idade = -1;
    strcpy(this->nome, nome);
}

void Pessoa::calculoIdade(int dia, int mes, int ano){
    this->idade = ano - this->ano;
    
    if(this->mes < mes){
        this->idade-=1;
    }else{
        if(this->mes == mes){
            if(this->dia < dia){
                this->idade-=1;
            }    
        }
    }

    printIdade();//Aplicando o desacoplamento
}

void Pessoa::printIdade(){
    cout << "A idade de " << this->nome << " seria " << this->idade << endl; //O cout é um comando que trabalha orientado a fluxo
}

int Pessoa::getIdade(){
    return this->idade;
}

void Pessoa::setUniversidadeFiliada(Universidade* universidadeFiliada){
    this->universidadeFiliada = universidadeFiliada;
}

void Pessoa::localTrabalho(){
    cout << this->nome << " trabalha para " << universidadeFiliada->getNome() << endl;
}
