#include "Pessoa.h"

class Principal{
    private:
        Pessoa Einstein;
        Pessoa Newton;

        int dia, mes, ano;

    public:
        Principal();//A função construtora inicializa elementos e também serve para alocar memória quando for o caso
        ~Principal();//A função destrutora zera alguns elementos e serve para desalocar memória
        void Executar();
};