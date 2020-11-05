#include"laboratorio.h"
#include<fstream>

Laboratorio::Laboratorio()
{}

void Laboratorio::agregarComputadora(const Computadora &c)
{
   computadoras.push_back(c);
}

void Laboratorio::mostrar(){

    cout<<left;
    cout<<setw(22)<<"Modelo";
    cout<<setw(15)<<"Procesador";
    cout<<setw(22)<<"Sistema operativo";
    cout<<setw(5)<<"Ram";
    cout<<endl;
    for (size_t i = 0; i < computadoras.size(); i++){
        Computadora &c = computadoras[i];
        cout<<c;
        /*cout<<"Nombre: "<<c.getModelo()<<endl;
        cout<<"Procesador: "<<c.getProcesador()<<endl;
        cout<<"Sistema operativo: "<<c.getSistema()<<endl;
        cout<<"Memoria Ram: "<<c.getRam()<<endl;
        cout<<endl<<endl;*/

    }
    

}

void Laboratorio::respaldar_tabla(){
    ofstream archivo("Computadoras_tabla.txt");
    if(archivo.is_open()){
        archivo<<left;
        archivo<<setw(22)<<"Modelo";
        archivo<<setw(15)<<"Procesador";
        archivo<<setw(22)<<"Sistema operativo";
        archivo<<setw(5)<<"Ram";
        archivo<<endl;
        for (size_t i = 0; i < computadoras.size(); i++){
            Computadora &c = computadoras[i];
            archivo<<c;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar(){
    ofstream archivo("Computadoras.txt");
    if(archivo.is_open()){
        for (size_t i = 0; i < computadoras.size(); i++){
            Computadora &c = computadoras[i];
            archivo<<c.getModelo()<<endl;
            archivo<<c.getProcesador()<<endl;
            archivo<<c.getSistema()<<endl;
            archivo<<c.getRam()<<endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar(){
    ifstream archivo("Computadoras.txt");
    if(archivo.is_open()){
        string temp;
        int ram;
        Computadora c;

        while (true)
        {
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            c.setModelo(temp);

            getline(archivo, temp);
            c.setProcesador(temp);

            getline(archivo,temp);
            c.setSistema(temp);

            getline(archivo,temp);
            ram =stoi(temp);
            c.setRam(ram);

            agregarComputadora(c);
        }
        
    }
    archivo.close();
}