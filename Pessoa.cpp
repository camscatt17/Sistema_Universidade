//A classe pode ser dividida em .h e .cpp a título de organização
//O arquivo .cpp armazena as definições dos métodos declarados na extensão .h da classe

#include "Pessoa.h" //Quando um arquivo inclui outro, significa que este arquivo está implementando o arquivo incluído
#include <string.h>
#include <iostream>

using std::cout;
using std::endl;

Pessoa::Pessoa(int dia, int mes, int ano, const char* nome){
        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
        this->idade = -1;
        strcpy(this->nome, nome);
}

void Pessoa::Calculo_Idade(int dia, int mes, int ano){
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

        cout << "A idade de " << this->nome << " seria " << this->idade << endl; //O cout é um comando que trabalha orientado a fluxo
}

int Pessoa::getIdade(){
    return this->idade;
}
