#include "Geladeira.h"

#include <iostream>
using std::cout;

Geladeira::Geladeira()
{
    onoff = false;
    temperatura = 0;
    
    for(int i = 0; i < 3; i++)
        listaCompras[ i ] = "none"; 
    
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
        cout << "Geladeira codigo HHHH funcionando corretamente. A temperatura interna eh " << temperatura
             << ". Faltam X dias para fazer a manuntecao preventiva!\n";
    else
        cout << "Geladeira desligada.\n";
}

void Geladeira::cadastrarCompra( string novaCompra, int indice )
{
     if( onoff )
    {
        if( indice >= 0 && indice < 3)
            listaCompras[indice] = novaCompra;
        else
            cout << "Nao pode ser cadastrado.\n";
    }
}

void Geladeira::listarCompras( ) const
{
    if( onoff )
    {
        cout << "A lista de compras eh:\n";
        for( int i = 0; i < 3; i++ )
            cout << listaCompras[i] << '\n';
    }
}