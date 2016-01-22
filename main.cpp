#include <iostream>
using std::cout;

#include "Geladeira.h"

int main(int argc, char **argv)
{
    Geladeira consol;
    
    consol.ligar( );
    
    //Lista vázia
    consol.listarCompras();
    
      cout << "\nCadastrando compras...\n";
    
    consol.cadastrarCompra("aveia",0);
    consol.cadastrarCompra("trigo",1);
    consol.cadastrarCompra("pao",2);
    
    cout << "Lista de compras preenchida.\n\n";
    
    consol.listarCompras();
    
    cout << "\n\n";
    consol.cadastrarCompra("pao",4);
    

        
	return 0;
}
