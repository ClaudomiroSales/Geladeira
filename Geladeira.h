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
    void registarDefeito( );
    
    static void statusTodasGeladeiraConstruidas( );
    
    //Outro método static
    static double calcCustoManutencao( double );
    
private:

    bool onoff;    
    float temperatura;
    bool indicadorDefeito;//Indica se a geladeira está com defeito
    bool emManutencao; //Indica se a geladeira está em manutenção
    string listaCompras[3]; 

    static int quantGeladDefeito;
    static int quantGeladeiraEmManutencao;
    

};

#endif // GELADEIRA_H
