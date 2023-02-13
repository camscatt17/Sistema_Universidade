#include "Principal.h"
#include <iostream>
#include<Windows.h>

using namespace std;

Principal::Principal():
Einstein(),
Newton()//Chamando explicitamente a construtora sem parâmetro
{
    Einstein.Inicializa(14, 03, 1879, "Einstein");
    Newton.Inicializa(4, 1, 1643, "Newton");

    //Recurso da biblioteca Windows.h que registra o dia, mes e ano atuais, de acordo com a data que o programa é compilado.
    SYSTEMTIME st;
    GetSystemTime(&st);
    dia = st.wDay;
    mes = st.wMonth;
    ano = st.wYear;

    Executar();
}

Principal::~Principal(){
//A destrutora aqui é vazia e serve para atender a regra geral de que toda classe deve ter uma destrutora vazia
}

void Principal::Executar(){
    Einstein.Calculo_Idade(dia, mes, ano);
    Newton.Calculo_Idade(dia, mes, ano);
}