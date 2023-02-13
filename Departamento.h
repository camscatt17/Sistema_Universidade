#pragma once

class Departamento{
    private:
        char* nome;

    public:
        Departamento();
        ~Departamento();
        void setNome(const char* nome);
        char* getNome();
};