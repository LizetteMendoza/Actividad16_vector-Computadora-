#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"
#include<vector>

class Laboratorio
{    
 private:
    vector<Computadora>computadoras;
    
 public:
    Laboratorio();
    void agregarComputadora(const Computadora &c);
    void mostrar();
    void respaldar_tabla();
    void respaldar();
    void recuperar();

    friend Laboratorio& operator<<(Laboratorio&l, const Computadora& c)
    {
       l.agregarComputadora(c);

       return l;
    }
};


#endif