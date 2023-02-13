#include "Departamento.h"
#include <string.h>

Departamento::Departamento(){
    strcpy(this->nome, "");
}

Departamento::~Departamento(){
}

void Departamento::setNome(const char* nome){
    strcpy(this->nome, nome);
}

char* Departamento::getNome(){
    return this->nome;
}