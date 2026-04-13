#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    float x, y =0;
    string respuesta="";
    do{
        system("cls");
        cout<<"ingrese el numero que desea redondear"<<endl;
        cin>>x;
        y = floor(x+0.5);
        cout<<"el entero del numero "<<x<<" es "<<y<< endl;
        cout<<"desea evaluar otro numero (s/n)"<<endl;
        cin>>respuesta;
    }while(respuesta == "s");
return 0;
}
