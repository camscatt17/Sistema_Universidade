#include <stdio.h>

struct Pessoa{
    int dia;
    int mes;
    int ano;
    int idade;
};

/*int Calculo_Idade(struct Pessoa p, int ano){
    int idade = ano - p.ano;
    return idade;
}*/

void Calculo_Idade(struct Pessoa *p, int dia, int mes, int ano){
    p->idade = ano - p->ano;
    
    if(p->mes > mes){
        p->idade-=1;
    }else{
        if(p->mes == mes){
            if(p->dia > dia){
                p->idade-=1;
            }    
        }
    }
}


int main(){
    struct Pessoa Einstein, Newton;

    Einstein.dia = 14;
    Einstein.mes = 3;
    Einstein.ano = 1879;
    Einstein.idade = -1;

    Newton.dia = 4;
    Newton.mes = 1;
    Newton.ano = 1643;
    Newton.idade = -1;

    Calculo_Idade(&Einstein, 6, 2, 2023);
    Calculo_Idade(&Newton, 6, 2, 2023);

    printf("A idade de Einstein seria %d \n", Einstein.idade);
    printf("A idade de Newton seria %d \n", Newton.idade);

    getchar();
    return 0;
}
