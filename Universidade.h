#pragma once //Cabeçalho de Pré-processador/Pré-compilação, servindo pra tratar de includes repetidos


class Universidade{
    private:
        char nome[30];

    public:
        Universidade();
        ~Universidade();
        void setNome(const char* nome);
        char* getNome();
};

