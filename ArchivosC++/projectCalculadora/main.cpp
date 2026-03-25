#include <iostream>
#include "calculadora.h"

using namespace std;

int main()
{
    float resultado=0.00;
        float primerNumero=0.00;
        float segundoNumero=0.00;
        int opcion;
    do{
        Calculadora calculo;
        cout<<"1-suma \n2-resta \n3-producto \n4-division \n5-mod\n6-salir"<<endl;
        cin>>opcion;
        if (opcion>=1 && opcion<=5){
            cout <<endl<< "ingrese el primer numero: ";
            cin >> primerNumero;
            cout <<endl<< "ingrese el segundo numero: ";
            cin >> segundoNumero;
        }
        switch (opcion){
            case 1:
                resultado = calculo.suma(primerNumero,segundoNumero);
                cout << "el resultado es: "<< resultado<<endl;
                break;
            case 2:
                resultado = calculo.resta(primerNumero,segundoNumero);
                cout << "el resultado es: "<< resultado<<endl;
                break;
            case 3:
                resultado = calculo.producto(primerNumero,segundoNumero);
                cout << "el resultado es: "<< resultado<<endl;
                break;
            case 4:
                if(segundoNumero==0){
                    cout<<"ERROR"<<endl;
                }
                else{
                    resultado = calculo.division(primerNumero,segundoNumero);
                    cout << "el resultado es: "<< resultado<<endl;
                }
                break;
            case 5:
                if(segundoNumero==0){
                    cout<<"ERROR"<<endl;
                }
                else{
                    resultado = calculo.divisionMod(primerNumero,segundoNumero);
                    cout << "el resultado es: "<< resultado<<endl;
                }
                break;
            case 6:
                break;
            default:
                cout << "opcion invalida"<<endl;
                break;
        }
    }while (opcion!=6);
    return 0;
}
