#include <string>
using std::string;

#ifndef GELADEIRA_H
#define GELADEIRA_H

class Geladeira
{
public:
    Geladeira();
    ~Geladeira();
    
    void ligar( );
    void incTemperatura( );
    void decTemperatura( );
    void mostrarStatus( ) const;
    void cadastrarCompra( string, int );
    void listarCompras( ) const;
    
private:

    bool onoff;    
    float temperatura;
    string listaCompras[3];        
    

};

#endif // GELADEIRA_H
