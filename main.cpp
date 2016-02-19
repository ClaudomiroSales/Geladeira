#include <iostream>
using std::cout;

#include "Geladeira.h"
#include "Data.h"

int main(int argc, char **argv)
{
    //Demonstrando agregação
    Geladeira * consol = new Geladeira( );
    Data * validadeProduto = new Data(1,12,2018);
    
    consol->ligar( );
    
    consol->registrarProdutos( validadeProduto );
    
    cout << "Deletando a geladeira...\n";
    delete consol;
    
    
    cout << "A data ainda existe.\n";
    validadeProduto->print( );
    
            
	return 0;
}
