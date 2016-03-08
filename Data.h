/* 
 * File:   Data.h
 * Author: Cssj
 *
 * Created on 9 de Junho de 2012, 14:47
 */

#include <ostream>
using std::ostream;

#ifndef DATA_H
#define	DATA_H

class Data 
{
    friend ostream &operator<<( ostream &, const Data & );
    
public:
    
    Data( int = 1, int = 1, int = 1900 );
    
    Data( const Data & );
        
    void setDia( int diaIn ) { dia = verificaDia( diaIn ); }
    void setMes( int mesIn ) { if ( mesIn >= 1 && mesIn <= 12 ) mes = mesIn; }
    void setAno( int anoIn ) { if ( anoIn >= 0 ) ano = anoIn; }
    
    const Data &operator=(const Data &);
    
    
private:
    
    int mes;
    int dia;
    int ano;
    
    int verificaDia( int ) const;


};

#endif	/* DATA_H */
