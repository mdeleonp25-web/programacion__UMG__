#include<iostream>
using namespace std;

//Prototipo de la funcion Suma

float calcularSuma(float primerNumero, float segundoNumero);
float calcularResta(float primerNumero, float segundoNumero);
float calcularProducto(float primerNumero, float segundoNumero);
float calcularDivision(float primerNumero, float segundoNumero);
int calcularMod(float primerNumero, float segundoNumero);

int main()
{
    float numero1 = 0;
    float numero2 =0;
    int opcion=0;



    do {
        cout<<"seleccione la opcio que desea realizar"<<endl;
        cout<<"1-suma \n2-resta \n3-producto \n4-division \n5-mod\n6-salir"<<endl;
        cin>>opcion;
        if (opcion>=1 && opcion<=5){
            cout<<"ingrese el primer numero: ";
            cin>>numero1;
            cout<<"\ningrese el segundo numero: ";
            cin>>numero2;
        }
        switch(opcion){
            case 1:
                cout<<"el resultado de la suma es: "<<calcularSuma(numero1,numero2)<<endl;
                break;
            case 2:
                cout<<"el resultado de la resta es: "<<calcularResta(numero1,numero2)<<endl;
                break;
            case 3:
                cout<<"el resultado del producto es: "<<calcularProducto(numero1,numero2)<<endl;
                break;
            case 4:
                cout<<"el resultado de la division es: "<<calcularDivision(numero1,numero2)<<endl;
                break;
            case 5:
                cout<<"el resultado de la division mod es: "<<calcularMod(numero1,numero2)<<endl;
                break;
            case 6:
                cout<<"Fin del programa"<<endl;
                break;
            default:
                cout<<"opcion invalida"<<endl;
                break;
        }
    }while (opcion!=6);
}

float calcularSuma(float primerNumero, float segundoNumero)
{
    return primerNumero+segundoNumero;
}
float calcularResta(float primerNumero, float segundoNumero)
{
    return primerNumero-segundoNumero;
}
float calcularProducto(float primerNumero, float segundoNumero)
{
    return primerNumero*segundoNumero;
}
float calcularDivision(float primerNumero, float segundoNumero)
{
    if (segundoNumero==0){
        cout<<"Error, la operacion no se puede realizar";
        return 0;
    }else {
        return primerNumero/segundoNumero;
    }

}
int calcularMod(float primerNumero, float segundoNumero)
{
    if ((int)segundoNumero==0){
        cout<<"Error, la operacion no se puede realizar";
        return 0;
    }else {
        return (int)primerNumero%(int)segundoNumero;
    }

}
