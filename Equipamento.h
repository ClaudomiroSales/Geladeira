#include <ostream>
using std::ostream;

#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

class Equipamento
{
    friend ostream &operator<<(ostream &, const Equipamento &);
    
public:
    Equipamento();
    ~Equipamento();
    
    const Equipamento &operator=(const Equipamento &);
    
private:

    

};

#endif // EQUIPAMENTO_H
