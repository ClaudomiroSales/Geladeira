#include <ostream>
using std::ostream;

#include "Data.h"

#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

class Equipamento
{
    friend ostream &operator<<(ostream &, const Equipamento &);
    
public:
    Equipamento();
    Equipamento( const Equipamento & );
    
    ~Equipamento();
    
    
    void ligar( );
    
    void registarManutencao(int, int, int);
    
    const Equipamento &operator=(const Equipamento &);
    
protected:

   bool onoff;    
  
  
private:
  
    Data ultimaManutencao;      //Deve ser inicializada em todos os construtores de Geladeira
    

};

#endif // EQUIPAMENTO_H
