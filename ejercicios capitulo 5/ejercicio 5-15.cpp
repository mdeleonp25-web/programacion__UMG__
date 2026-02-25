#include <iostream>
#include <string>
#include <iomanip> // Necesario para setprecision (decimales)

using namespace std;

// --- DEFINICIÓN DE LA CLASE (Originalmente LibroCalificaciones.h) ---
class LibroCalificaciones {
public:
    // Constructor
    explicit LibroCalificaciones(string nombre)
        : aCuenta(0), bCuenta(0), cCuenta(0), dCuenta(0), fCuenta(0) {
        establecerNombreCurso(nombre);
    }

    void establecerNombreCurso(string nombre) {
        if (nombre.size() <= 25)
            nombreCurso = nombre;
        else {
            nombreCurso = nombre.substr(0, 25);
            cerr << "El nombre \"" << nombre << "\" excede la longitud maxima (25).\n"
                 << "Se limito nombreCurso a los primeros 25 caracteres.\n" << endl;
        }
    }

    string obtenerNombreCurso() const {
        return nombreCurso;
    }

    void mostrarMensaje() const {
        cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso() << "!\n" << endl;
    }

    // Función para ingresar las notas
    void recibirCalificaciones() {
        int calificacion;

        cout << "Escriba las calificaciones de letra." << endl;
        cout << "Escriba el caracter EOF para terminar la entrada." << endl;
        cout << "  (En Windows: Ctrl + Z y luego Enter)" << endl;
        cout << "  (En Linux/Mac: Ctrl + D)" << endl;

        // Bucle que lee caracteres hasta que recibe la señal de fin de archivo (EOF)
        while ((calificacion = cin.get()) != EOF) {
            switch (calificacion) {
                case 'A': case 'a':
                    ++aCuenta;
                    break;
                case 'B': case 'b':
                    ++bCuenta;
                    break;
                case 'C': case 'c':
                    ++cCuenta;
                    break;
                case 'D': case 'd':
                    ++dCuenta;
                    break;
                case 'F': case 'f':
                    ++fCuenta;
                    break;
                case '\n': case '\t': case ' ': // Ignorar espacios en blanco
                    break;
                default:
                    cout << "Letra de calificacion incorrecta." << " Escriba una nueva calificacion." << endl;
                    break;
            }
        }
    }

    // --- AQUÍ ESTÁ LA SOLUCIÓN DEL EJERCICIO 5.15 ---
    void mostrarReporteCalificaciones() const {
        cout << "\n\nNumero de estudiantes que recibieron cada calificacion de letra:"
             << "\nA: " << aCuenta
             << "\nB: " << bCuenta
             << "\nC: " << cCuenta
             << "\nD: " << dCuenta
             << "\nF: " << fCuenta
             << endl;

        // 1. Calcular total de notas ingresadas
        int totalCalificaciones = aCuenta + bCuenta + cCuenta + dCuenta + fCuenta;

        // 2. Calcular promedio ponderado (GPA)
        if (totalCalificaciones != 0) {
            // A=4, B=3, C=2, D=1, F=0
            int totalPuntos = (aCuenta * 4) + (bCuenta * 3) + (cCuenta * 2) + (dCuenta * 1) + (fCuenta * 0);

            double promedio = static_cast<double>(totalPuntos) / totalCalificaciones;

            cout << fixed << setprecision(2); // Formato para mostrar 2 decimales
            cout << "\nEl promedio de puntos de las calificaciones es: " << promedio << endl;
        } else {
            cout << "No se introdujeron calificaciones." << endl;
        }
    }

private:
    string nombreCurso;
    int aCuenta;
    int bCuenta;
    int cCuenta;
    int dCuenta;
    int fCuenta;
};

// --- FUNCIÓN MAIN (Originalmente fig05_11.cpp) ---
int main() {
    // Crea un objeto LibroCalificaciones
    LibroCalificaciones miLibroCalificaciones("CS101 Programacion en C++");

    miLibroCalificaciones.mostrarMensaje();
    miLibroCalificaciones.recibirCalificaciones();
    miLibroCalificaciones.mostrarReporteCalificaciones();

    return 0;
}
