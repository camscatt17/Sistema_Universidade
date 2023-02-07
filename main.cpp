#include <stdio.h>

struct Pessoa{
    public://Identifica a visibilidade dos atributos e funções
    //Como esses atributos são públicos, conseguem ser acessados fora da struct
        int dia;
        int mes;
        int ano;
        int idade;

    //Função Construtora: Inicializa variáveis
    //Vantagem: O código fica mais limpo
    Pessoa (int dia, int mes, int ano){
        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
        this->idade = -1;
    }

    //A struct além de armazenar os dados, armazena também a função, mais de acordo com os princípios da POO
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
};


int main(){
    Pessoa Einstein (14, 3, 1879); //Além de criar um objeto do tipo Pessoa, já se inicializa esse objeto através da sua construtora
    Pessoa Newton(4, 1, 1643);

    Einstein.Calculo_Idade(6, 2, 2023);
    Newton.Calculo_Idade(6, 2, 2023);

    printf("A idade de Einstein seria %d \n", Einstein.idade);
    printf("A idade de Newton seria %d \n", Newton.idade);
    
    getchar();
    return 0;
}

