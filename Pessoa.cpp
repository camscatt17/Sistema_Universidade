//A classe pode ser dividida em .h e .cpp a título de organização
//O arquivo .cpp armazena as definições dos métodos declarados na extensão .h da classe

#include "Pessoa.h" //Quando um arquivo inclui outro, significa que este arquivo está implementando o arquivo incluído

Pessoa::Pessoa(int dia, int mes, int ano){
        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
        this->idade = -1;
}

void Pessoa::Calculo_Idade(int dia, int mes, int ano){
        this->idade = ano - this->ano;
    
        if(this->mes > mes){
            this->idade-=1;
        }else{
            if(this->mes == mes){
                if(this->dia > dia){
                    this->idade-=1;
                }    
            }
        }
}

int Pessoa::getIdade(){
    return this->idade;
}