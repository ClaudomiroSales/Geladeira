#include <iostream>
using std::cout;

#include "Geladeira.h"

int main(int argc, char **argv)
{
    Geladeira consol;
    
    consol.ligar( );
    
    consol.incTemperatura( );
    
    consol.decTemperatura( );
    
    consol.decTemperatura( );
    
    consol.decTemperatura( );
    
    consol.mostrarStatus( );
    

        
	return 0;
}
