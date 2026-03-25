#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <string>

using namespace std;


class Calculadora
{
    public:
        calculadora();
        float suma(float numero1, float numero2);
        float resta(float numero1, float numero2);
        float producto(float numero1, float numero2);
        float division(float numero1, float numero2);
        int divisionMod(float numero1, float numero2);

    protected:

    private:

};

#endif // CALCULADORA_H
