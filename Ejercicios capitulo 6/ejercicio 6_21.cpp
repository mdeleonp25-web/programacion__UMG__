#include <iostream>
#include <cstdlib>

using namespace std;

bool esPar(int numero);

int main(){
int numero = 0;
string respuesta = "";
do{
    system("cls");
    cout<<"ingrese el numero que desea evaluar"<<endl;
    cin>>numero;
    if (esPar(numero)){
        cout<<"el numero ingresado es par"<<endl;
    }else{
        cout<<"el numero ingresado no es par"<<endl;
    }
    cout<<"desea evaluar otro numero (s/n) "<<endl;
    cin>>respuesta;
}while (respuesta == "s");

return 0;
}

bool esPar(int numero){
    if ((numero % 2) == 0){
            return true;
    }else{
        return false;
    }
}
