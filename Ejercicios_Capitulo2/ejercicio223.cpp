#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4, n5, mayor, menor;
    cout << "Introduzca cinco enteros distintos: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    mayor = n1;
    menor = n1;

    if (n2 > mayor)
        mayor = n2;
    if (n3 > mayor)
        mayor = n3;
    if (n4 > mayor)
        mayor = n4;
    if (n5 > mayor)
        mayor = n5;

    if (n2 < menor)
        menor = n2;
    if (n3 < menor)
        menor = n3;
    if (n4 < menor)
        menor = n4;
    if (n5 < menor)
        menor = n5;

    cout << "El menor es " << menor << endl;
    cout << "El mayor es " << mayor << endl;

    return 0;
}
