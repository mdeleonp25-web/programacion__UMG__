#include<iostream>
using namespace std;

int calcularPromedio(float totalGeneral, int numeroVeces);

int main()
{
    float totalInicial=0;
    cout<<"ingrese numero a promediar"<<endl;
    cin>>totalInicial;
    cout<<"ingrese la cantidad de veces"<<endl;
    int numeroVeces=0;
    cin>>numeroVeces;
    cout<<"Promedio General: "<<calcularPromedio(totalInicial,numeroVeces)<<endl;
    return 0;
}

int calcularPromedio(float totalGeneral, int numeroVeces)
{
    return totalGeneral/numeroVeces;
}
