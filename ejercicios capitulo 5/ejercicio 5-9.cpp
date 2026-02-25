#include <iostream>

using namespace std;

int main() {
    int total = 1;

    for (int i = 1; i <= 15; i += 2) {
        total *= i;
    }

    cout << "El producto de los impares del 1 al 15 es: " << total << endl;

    return 0;
}
