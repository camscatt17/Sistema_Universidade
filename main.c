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

int Calculo_Idade(struct Pessoa p, int dia, int mes, int ano){
    int idade = ano - p.ano;
    
    if(p.mes > mes){
        idade-=1;
    }else{
        if(p.mes == mes){
            if(p.dia > dia){
                idade-=1;
            }    
        }
    }
    return idade;
}


int main(){
    struct Pessoa Einstein, Newton;

    Einstein.dia = 14;
    Einstein.mes = 3;
    Einstein.ano = 1879;

    Newton.dia = 4;
    Newton.mes = 1;
    Newton.ano = 1643;

    Einstein.idade = Calculo_Idade(Einstein, 6, 2, 2023);
    Newton.idade = Calculo_Idade(Newton, 6, 2, 2023);

    printf("A idade de Einstein seria %d \n", Einstein.idade);
    printf("A idade de Newton seria %d \n", Newton.idade);

    getchar();
    return 0;
}
