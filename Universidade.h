#pragma once 
#include "Departamento.h"


class Universidade{
    private:
        char nome[30];

        Departamento* dpto;

    public:
        Universidade();
        ~Universidade();
        void setNome(const char* nome);
        char* getNome();
        void setDepartamento(Departamento* dpto);
};

