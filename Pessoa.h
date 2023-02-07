
#include <stdio.h>

struct Pessoa{
    //Em uma struct do C++, todos os elementos são públicos por default
    //Quando os atributos são public eles conseguem ser acessados fora da struct, ou seja, em qualquer parte do programa.
    
    //Quando alguma estrutura possui a visibilidade private, seus elementos somente podem ser acessados no escopo definido por ela 
    //Regra pre definida por boas práticas: Atributos -> privados; Funções -> públicas
    private:
        int dia;
        int mes;
        int ano;
        int idade;

    public:
    //Função Construtora
    Pessoa (int dia, int mes, int ano){
        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
        this->idade = -1;
    }

    void Calculo_Idade(int dia, int mes, int ano){
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

    int getIdade(){
        return this->idade;
    }
};

