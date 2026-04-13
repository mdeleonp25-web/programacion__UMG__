#include <iostream>
#include <cstdlib>

using namespace std;

double valorMinimo(double numero1, double numero2, double numero3);

int main(){
    double num1, num2, num3 = 0;

    cout<<"ingresa 3 numeros separados por espacio"<<endl;
    cin>>num1>>num2>>num3;
    cout<<"el numero menor es "<<valorMinimo(num1, num2, num3)<<endl;
return 0;
}

double valorMinimo(double numero1, double numero2, double numero3){
    double menor = numero1;
    if (numero2<menor){
        menor = numero2;
    }
    if (numero3<menor){
        menor= numero3;
    }
    return menor;
}
