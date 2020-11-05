#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include<iostream>
#include<iomanip>
using namespace std; 


class Computadora
{
private:
    string modelo;
    string procesador;
    string sistema;
    int ram;

public:
   Computadora();
   Computadora(const string&modelo, const string&procesador, const string&sistema, int ram);
   void setModelo(const string&v);
   string getModelo();
   void setProcesador(const string&v);
   string getProcesador();
   void setSistema(const string&v);
   string getSistema();
   void setRam(int v);
   int getRam();

   friend ostream& operator <<(ostream&out, const Computadora&c)
   {    
        out<<left;
        out<<setw(22)<<c.modelo;
        out<<setw(15)<<c.procesador;
        out<<setw(22)<<c.sistema;
        out<<setw(5)<<c.ram;
        out<<endl;
       return out;
   } 

 
   friend istream&  operator >>(istream&in, Computadora&c)
   {
       string temp;
       int ram;

       cout<<"Modelo: ";
       getline(cin, c.modelo);
       cout<<"Procesador: ";
       getline(cin, c.procesador);
       cout<<"Sistema operativo:";
       getline(cin, c.sistema);
       cout<<"Ram: ";
       cin>>c.ram;

        return in;
   }
   
};

#endif