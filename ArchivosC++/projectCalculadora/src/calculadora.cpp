#include "calculadora.h"

Calculadora::calculadora()
{
    return 0;
}
float Calculadora::suma(float valor1, float valor2)
{
    return valor1+valor2;
}
float Calculadora::resta(float valor1, float valor2)
{
    return valor1-valor2;
}
float Calculadora::producto(float valor1, float valor2)
{
    return valor1*valor2;
}
float Calculadora::division(float valor1, float valor2)
{
    return valor1/valor2;
}
int Calculadora::divisionMod(float valor1, float valor2)
{
    return (int)valor1 % (int)valor2;
}
