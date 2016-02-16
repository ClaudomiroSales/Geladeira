#include <iostream>
using std::cout;

#include "Geladeira.h"

int main(int argc, char **argv)
{
    Geladeira consol, brastemp;
    
    consol.ligar( );
    brastemp.ligar( );
    
    consol.registarDefeito();
    brastemp.registarDefeito();
    
    //Usando membro static no main
    Geladeira::statusTodasGeladeiraConstruidas();
    
    cout << "O gasto da empresa com manutencao foi R$ " << Geladeira::calcCustoManutencao( 100.0 ) << '\n';
    

        
	return 0;
}
