#include "Universidade.h"
#include <string.h>

Universidade::Universidade(){
    strcpy(this->nome, "");
}

Universidade::~Universidade(){
}

void Universidade::setNome(const char* nome){
    strcpy(this->nome, nome);
}

char* Universidade::getNome(){
    return this->nome;
}

void Universidade::setDepartamento(Departamento* dpto){
    //Agregação via ponteiro
    this->dpto = dpto;
}