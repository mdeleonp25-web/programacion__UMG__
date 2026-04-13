#include <cmath>
#include <iostream>

using namespace std;

double calculoHipotenusa(double lado1, double lado2);

int main(){
    double cateto1, cateto2 = 0;
    cout<<"triangulo numero 1 "<<endl;
    cateto1=3.0, cateto2=4.0;
    cout<<"lado1 = "<<cateto1<<endl<<"lado2 = "<<cateto2<<endl;
    cout<<"la hipotenusa es = "<<calculoHipotenusa(cateto1,cateto2)<<endl;
    cout<<endl<<"triangulo numero 2 "<<endl;
    cateto1=5.0, cateto2=12.0;
    cout<<"lado1 = "<<cateto1<<endl<<"lado2 = "<<cateto2<<endl;
    cout<<"la hipotenusa es = "<<calculoHipotenusa(cateto1,cateto2)<<endl;
    cout<<endl<<"triangulo numero 3 "<<endl;
    cateto1=8.0, cateto2=15.0;
    cout<<"lado1 = "<<cateto1<<endl<<"lado2 = "<<cateto2<<endl;
    cout<<"la hipotenusa es = "<<calculoHipotenusa(cateto1,cateto2)<<endl;
return 0;
}

double calculoHipotenusa(double lado1, double lado2){
    return sqrt(pow(lado1, 2) + pow(lado2, 2));
}
