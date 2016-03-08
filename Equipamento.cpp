#include "Equipamento.h"

#include <iostream>
using std::cout;

Equipamento::Equipamento()
:ultimaManutencao() //Chamando o construtor de cópia de Data, tem de colocar o parêntese mesmo que não tenha parâmetros
{
    onoff = false;
}

Equipamento::Equipamento( const Equipamento &outro )
:ultimaManutencao( outro.ultimaManutencao )
{
    this->onoff =  outro.onoff;
}

Equipamento::~Equipamento()
{
}

void Equipamento::ligar( )
{
    if ( !onoff )
    {
        onoff = true;
        cout << "O aparelho foi ligado\n";
    }
    else
        cout << "Aparelho jah estava ligado" << '\n';    
}


void Equipamento::registarManutencao(int dia, int mes, int ano)
{
    ultimaManutencao.setDia(dia);
    ultimaManutencao.setMes(mes);
    ultimaManutencao.setAno(ano);
    
    cout << "A manutencao atual eh " << ultimaManutencao;
    cout << '\n';
}


ostream &operator<<(ostream &out, const Equipamento &equip)
{
    if ( equip.onoff )
    {   
        out << "Imprimindo status:\n";
        
        out << "A data da ultima manutencao foi: " << equip.ultimaManutencao << '\n';
    }
    else
        out << "Equipamento desligado.\n";
        
    return out;

}

