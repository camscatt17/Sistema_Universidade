//Continuando no método de OO, no arquivo main.cpp coloca-se apenas a função main(), desacoplando as outras estruturas do programa em diferentes arquivos

#include "Pessoa.h"
#include <iostream>
using namespace std;

int main(){
    int dia, mes, ano;

    Pessoa Einstein (14, 3, 1879, "Einstein");
    Pessoa Newton(4, 1, 1643, "Newton");
    
    cout << "Informe o dia, mes e ano atual: " << endl;
    cin >> dia >> mes >> ano;

    Einstein.Calculo_Idade(dia, mes, ano);
    Newton.Calculo_Idade(dia, mes, ano);

    cout << "Fim do Programa." << endl;

    getchar();
    return 0;
}

