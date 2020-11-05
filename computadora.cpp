#include"computadora.h"
//#include<iostream>
 //using namespace std;


Computadora::Computadora(){};
Computadora::Computadora(const string& modelo, 
               const string& procesador, 
               const string& sistema, 
               int ram)
{
    this->modelo =modelo;
    this->procesador = procesador;
    this->sistema = sistema;
    this-> ram = ram;
}

void Computadora::setModelo(const string &v)
{   
    modelo =v;
}

string Computadora::getModelo(){
    return modelo;
}

void Computadora::setProcesador(const string &v)
{   
    procesador =v;
}

string Computadora::getProcesador(){
    return procesador;
}
void Computadora::setSistema(const string&v){
    sistema = v;
}
string Computadora::getSistema(){
    return sistema;
}

void Computadora::setRam(int v)
{
    ram = v;
}

int Computadora::getRam()
{
    return ram;
}