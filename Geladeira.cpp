#include "Geladeira.h"

#include <iostream>
using std::cout;

Geladeira::Geladeira()
{
    onoff = false;
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
