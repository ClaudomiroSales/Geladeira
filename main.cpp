#include <iostream>
using std::cout;

#include "Geladeira.h"

int main(int argc, char **argv)
{
    Geladeira consol;
    
    consol.ligar( );
    
    consol.registarManutencao(1, 12, 2016);

    
    consol.mostrarStatus( );
    
    

        
	return 0;
}
