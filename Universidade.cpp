#include "Universidade.h"
#include <string.h>

Universidade::Universidade(){

}

Universidade::~Universidade(){

}

void Universidade::setNome(const char* nome){
    strcpy(this->nome, nome);
}

char* Universidade::getNome(){
    return this->nome;
}