#include<iostream>
using namespace std;

class Persona{

public:
    Persona(){
    }
    Persona(string pNombre, string pApellido){
        Nombre=pNombre;
        Apellido=pApellido;
    }
    string getNombre(){
        return Nombre;
    }
    void setNombre(string pNombre){
        Nombre = pNombre;
    }
    string getApellido(){
        return Apellido;
    }
    void setApellido(string pApellido){
        Apellido = pApellido;
    }
private:
    string Nombre;
    string Apellido;
};

int main()
{
    Persona Persona2;
    Persona2.setNombre("Carlos");
    Persona2.setApellido("Molina");
    cout<<Persona2.getNombre()<<" "<<Persona2.getApellido();
}
