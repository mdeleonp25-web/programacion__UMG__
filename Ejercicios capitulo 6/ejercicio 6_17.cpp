#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    cout << "Generador de un numero al azar de cada conjunto:" << endl;
    cout << "a) {2, 4, 6, 8, 10}"<<endl;
    cout << "b) {3, 5, 7, 9, 11}"<< endl;
    cout << "c) {6, 10, 14, 18, 22}" << endl;
    cout<<"numero del conjunto a) " << 2 + (2 * (rand() % 5)) << endl;
    cout<<"numero del conjunto b) " << 3 + (2 * (rand() % 5)) << endl;
    cout<<"numero del conjunto c) "<< 6 + (4 * (rand() % 5)) << endl;
    return 0;
}
