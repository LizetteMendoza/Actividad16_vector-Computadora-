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

    void inicializar(const Computadora &c, size_t n);
    size_t size();
    void insertar(const Computadora&c, size_t pos);
    void eliminar(size_t pos);

    friend Laboratorio& operator<<(Laboratorio&l, const Computadora& c)
    {
       l.agregarComputadora(c);

       return l;
    }
};


#endif