#include "Geladeira.h"

#include <iostream>
using std::cout;

Geladeira::Geladeira()
:ultimaManutencao() //Chamando o construtor de cópia de Data, tem de colocar o parêntese mesmo que não tenha parâmetros
{
    onoff = false;
    temperatura = 0;
    
    numResidentes = 0;
    residentes = 0;
}

Geladeira::~Geladeira()
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


void Geladeira::incTemperatura( )
{
    if( onoff )
    {
        temperatura += 2;
        cout << "A temperatura aumentou em dois graus.\n"
             << "A temperatura atual eh: " << temperatura << '\n';
        
    }
    else 
         cout << "Tentando aumentar temperatura mas a geladeira estah desligada.\n";
}

void Geladeira::decTemperatura( )
{
    if( onoff )
    {
        temperatura -= 2;
        cout << "A temperatura diminuiu em dois graus.\n"
             << "A temperatura atual eh: " << temperatura << '\n';
    }
    else 
         cout << "Tentando diminuir temperatura mas a geladeira estah desligada.\n";
}


void Geladeira::mostrarStatus( ) const
{
    if( onoff )
    {
        cout << "Geladeira codigo HHHH funcionando corretamente. A temperatura interna eh " << temperatura
             << "\nA ultima manutencao foi: "; 
             ultimaManutencao.print();
        cout << ".\nFaltam X dias para fazer a manuntecao preventiva!\n";
    }
    else
        cout << "Geladeira desligada.\n";
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

void Geladeira::adicionarResidentes(const string &novoResidente)
{
    if( numResidentes != 0 )
    {
        string * aux = new string[ numResidentes ];
        
        for(int i = 0; i < numResidentes; i++)
            aux[ i ] = residentes[ i ];
        
        delete [ ] residentes;
        
        residentes = new string[ ++numResidentes ] ;
        
        for(int i = 0; i < numResidentes-1; i++)
            residentes[ i ] = aux[ i ];
            
        residentes[ numResidentes - 1 ] = novoResidente;
            
        delete [ ] aux;
        
    }
    else
    {
        residentes = new string[++numResidentes];
        residentes[0] = novoResidente;
    }
}

void Geladeira::listarResidentes( ) const
{
    if ( numResidentes > 0)
        for(int i = 0; i < numResidentes-1; i++)
            cout << residentes[ i ] << '\n';
     else
         cout << "Nenhum residente cadastrado.";
    
}