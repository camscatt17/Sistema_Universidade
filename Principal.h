#pragma once
#include "Pessoa.h"
#include "Universidade.h"

class Principal{
    private:
        Pessoa Simao;
        Pessoa Einstein;
        Pessoa Newton;

        Universidade UTFPR;
        Universidade Cambridge;
        Universidade Princeton;

        int dia, mes, ano;

    public:
        Principal();//A função construtora inicializa elementos e também serve para alocar memória quando for o caso
        ~Principal();//A função destrutora zera alguns elementos e serve para desalocar memória
        void Executar();
};