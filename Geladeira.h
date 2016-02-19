#include "Data.h"

#include "string"
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
    
    void registarManutencao(int, int, int);
    
    void adicionarResidentes( const string & );
    
    
    void listarResidentes( ) const;
    
    void registrarProdutos( Data * const );    
    
    
private:

    bool onoff;    
    float temperatura;
    
    Data ultimaManutencao;      //Deve ser inicializada em todos os construtores de Geladeira
    
    string *residentes; //Quem mora na casa
    int numResidentes;
    
    Data *dataValidadeMaisRecente;
    
    

};

#endif // GELADEIRA_H
