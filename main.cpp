#include<iostream>
#include"laboratorio.h"
using namespace std;

int main(){
    Laboratorio l;
    string op;

    while(true){
        cout<<"1)Agregar Computadora"<<endl;
        cout<<"2)Mostrar"<<endl;
        cout<<"3)Respaldar"<<endl;
        cout<<"4)Recuperar"<<endl;
        cout<<"5)Insertar"<<endl;
        cout<<"0)Salir"<<endl;

        getline(cin,op);

        if(op=="1"){
            Computadora c;
            cin>>c; cin.ignore();

            l.agregarComputadora(c);
        }
        else if(op=="2"){
            l.mostrar();
        }
        else if(op=="3"){
            l.respaldar();
        }
        else if(op=="4"){
            l.recuperar();
        }
        else if(op=="5"){
            Computadora c;
            cin>>c; cin.ignore();

            size_t pos;
            cout<<"Posicion: ";
            cin>>pos; cin.ignore();

            if(pos>=l.size()){
                cout<<"Posicion no valida"<<endl;
            }
            else{
                l.insertar(c,pos);
            }
        }
        else if(op=="0"){
            break;
        }

    }

    return 0;
}
