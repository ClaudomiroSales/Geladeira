#include "Equipamento.h"


#include "string"
using std::string;

#ifndef GELADEIRA_H
#define GELADEIRA_H



class Geladeira : public Equipamento
{
    friend ostream &operator<<( ostream &, const Geladeira & );
    
public:
    Geladeira();
    Geladeira( const Geladeira & );
    ~Geladeira();
    
    void incTemperatura( );
    void decTemperatura( );
    //void mostrarStatus( ) const;
    
       
    void adicionarResidentes( const string & );
    
    
    void listarResidentes( ) const;
    
    
    const Geladeira &operator=( const Geladeira & );

    
    
    
private:

    float temperatura;    
    
    string *residentes; //Quem mora na casa
    int numResidentes;
    
    

};

#endif // GELADEIRA_H
