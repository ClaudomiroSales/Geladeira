#include <iostream>
using std::cout;

#include "Geladeira.h"

int main(int argc, char **argv)
{
    Geladeira consol, brastemp;
    
    consol.ligar( );
    
    consol.adicionarResidentes("Mico");
    
    //consol.listarResidentes( );
    
    consol.adicionarResidentes( "Gabriela");
    consol.adicionarResidentes("Mortandela");
    
    //consol.listarResidentes( );
    
    brastemp = consol;
    
    Geladeira marvel( consol );
    
    cout << "\n\nConsol\n";
    cout << consol;
    cout << "\n\n";
    cout << "Brastemp\n";
    cout << brastemp;
    cout << "\n\n";
    cout << "Marvel\n";
    cout << marvel;
    

        
	return 0;
}
