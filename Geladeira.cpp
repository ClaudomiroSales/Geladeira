#include "Geladeira.h"

#include <iostream>
using std::cout;

Geladeira::Geladeira()
{
    temperatura = 0;
    
    numResidentes = 0;
    residentes = 0;
}

Geladeira::~Geladeira()
{
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


void Geladeira::adicionarResidentes(const string &novoResidente)
{
    if( onoff )
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
    else
        cout << "Geladeira desligada";
}

void Geladeira::listarResidentes( ) const
{
    if ( numResidentes > 0)
    {
        cout << "Os residentes sao: \n";
        for(int i = 0; i < numResidentes; i++)
            cout << residentes[ i ] << '\n';
    }
     else
         cout << "Nenhum residente cadastrado.";
    
}