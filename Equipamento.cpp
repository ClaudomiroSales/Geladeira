#include "Equipamento.h"

Equipamento::Equipamento()
:ultimaManutencao() //Chamando o construtor de cópia de Data, tem de colocar o parêntese mesmo que não tenha parâmetros
{
    onoff = false;
}

Equipamento::~Equipamento()
{
}

void Geladeira::ligar( )
{
    if ( !onoff )
    {
        onoff = true;
        cout << "O aparelho foi ligado\n";
    }
    else
        cout << "Aparelho jah estava ligado" << '\n';    
}


void Geladeira::registarManutencao(int dia, int mes, int ano)
{
    ultimaManutencao.setDia(dia);
    ultimaManutencao.setMes(mes);
    ultimaManutencao.setAno(ano);
    
    cout << "A manutencao atual eh ";
    ultimaManutencao.print();
    cout << '\n';
}

