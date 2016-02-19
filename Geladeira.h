#include "Data.h"

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
    
private:

    bool onoff;    
    float temperatura;
    
    Data ultimaManutencao;      //Deve ser inicializada em todos os construtores de Geladeira

};

#endif // GELADEIRA_H
