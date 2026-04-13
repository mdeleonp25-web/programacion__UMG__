#include <iostream>

using namespace std;

void cuadrado(int lado, char caracterRelleno);

int main(){
    int dimension = 0;
    char caracter = ' ';
    cout<<"ingrese el tamaño del cuadro "<<endl;
    cin>>dimension;
    cout<<"ingrese el caracter de relleno "<<endl;
    cin>>caracter;
    cuadrado(dimension,caracter);

return 0;
}

void cuadrado(int lado, char caracterRelleno) {

    for (int i = 0; i < lado; i++) {

        for (int j = 0; j < lado; j++) {
            cout << caracterRelleno;
        }

        cout << endl;
    }
}
