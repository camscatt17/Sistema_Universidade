//Continuando no método de OO, no arquivo main.cpp coloca-se apenas a função main(), desacoplando as outras estruturas do programa em diferentes arquivos

#include "Pessoa.h"
//Quando o main.cpp inclui uma estrutura .h, ele está incluindo o seu .cpp associado respectivamente

int main(){
    Pessoa Einstein (14, 3, 1879); //Além de criar um objeto do tipo Pessoa, já se inicializa esse objeto através da sua construtora
    Pessoa Newton(4, 1, 1643);

    Einstein.Calculo_Idade(6, 2, 2023);
    Newton.Calculo_Idade(6, 2, 2023);

    printf("A idade de Einstein seria %d \n", Einstein.getIdade());
    printf("A idade de Newton seria %d \n", Newton.getIdade());

    getchar();
    return 0;
}

