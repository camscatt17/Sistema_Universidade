#include "Principal.h"
#include <iostream>
#include<Windows.h>

using namespace std;

Principal::Principal():
Simao(),
Einstein(),
Newton() //Chamando explicitamente a construtora sem parâmetro
{
    Simao.Inicializa(3, 10, 1976, "Jean Simao");
    Einstein.Inicializa(14, 3, 1879, "Albert Einstein");
    Newton.Inicializa(4, 1, 1643, "Isaac Newton");

    //Recurso da biblioteca Windows.h que registra o dia, mes e ano atuais, de acordo com a data que o programa é compilado.
    SYSTEMTIME st;
    GetSystemTime(&st);
    dia = st.wDay;
    mes = st.wMonth;
    ano = st.wYear;

    //Nesta parte as classes Universidade e Pessoa são associados
    UTFPR.setNome("UTFPR");
    Cambridge.setNome("Cambridge");
    Princeton.setNome("Princeton");

    Simao.setUniversidadeFiliada(&UTFPR);
    Einstein.setUniversidadeFiliada(&Princeton);
    Newton.setUniversidadeFiliada(&Cambridge);

    //Nesta parte os objetos Universidade e departamento são agregados
    DAMAT.setNome("DAMAT");
    DAFIS.setNome("DAFIS");
    DAINF.setNome("DAINF");

    UTFPR.setDepartamento(&DAINF);
    Cambridge.setDepartamento(&DAFIS);
    Princeton.setDepartamento(&DAMAT);
    

    Executar();
}

Principal::~Principal(){
//A destrutora aqui é vazia e serve para atender a regra geral de que toda classe deve ter uma destrutora vazia
}

void Principal::Executar(){
    Simao.calculoIdade(dia, mes, ano);
    //Simao.localTrabalho();
    Simao.departamentoTrabalho();

    Einstein.calculoIdade(dia, mes, ano);
    //Einstein.localTrabalho();
    Einstein.departamentoTrabalho();

    Newton.calculoIdade(dia, mes, ano);
    //Newton.localTrabalho();
    Newton.departamentoTrabalho();
}