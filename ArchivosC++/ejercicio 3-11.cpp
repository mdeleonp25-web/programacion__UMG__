#include <iostream>
#include <string>
using namespace std;
class LibroCalificaciones {
public:
    explicit LibroCalificaciones(string nombreC, string nombreI)
        : nombreCurso(nombreC), nombreInstructor(nombreI) {
    }

    void establecerNombreCurso(string nombre) {
        nombreCurso = nombre;
    }

    string obtenerNombreCurso() const {
        return nombreCurso;
    }

    void establecerNombreInstructor(string nombre) {
        nombreInstructor = nombre;
    }

    string obtenerNombreInstructor() const {
        return nombreInstructor;
    }
    void mostrarMensaje() const {
        cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso() << "!" << endl;
        cout << "Este curso es presentado por: " << obtenerNombreInstructor() << endl;
    }

private:
    string nombreCurso;
    string nombreInstructor;
};

int main() {
    LibroCalificaciones miLibro("Sistemas Operativos 1", "Ing. Morales");
    cout << "--- Datos Iniciales ---" << endl;
    miLibro.mostrarMensaje();
    cout << "\n--- Actualizando Instructor ---" << endl;
    miLibro.establecerNombreInstructor("Dra. Hernandez");
    miLibro.mostrarMensaje();

    return 0;
}
