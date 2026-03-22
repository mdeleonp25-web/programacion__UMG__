#include <iostream>
#include <string>

using namespace std;

class Factura {
public:

    Factura(string numero, string desc, int cant, int precioArt) {
        numeroPieza = numero;
        descripcionPieza = desc;

        cantidad = (cant > 0) ? cant : 0;
        precioPorArticulo = (precioArt > 0) ? precioArt : 0;
    }

    void establecerNumeroPieza(string numero) { numeroPieza = numero; }
    void establecerDescripcionPieza(string desc) { descripcionPieza = desc; }

    void establecerCantidad(int cant) {
        cantidad = (cant > 0) ? cant : 0;
    }

    void establecerPrecioPorArticulo(int precioArt) {
        precioPorArticulo = (precioArt > 0) ? precioArt : 0;
    }

    string obtenerNumeroPieza() const { return numeroPieza; }
    string obtenerDescripcionPieza() const { return descripcionPieza; }
    int obtenerCantidad() const { return cantidad; }
    int obtenerPrecioPorArticulo() const { return precioPorArticulo; }
    int obtenerMontoFactura() const {
        return cantidad * precioPorArticulo;
    }

private:
    string numeroPieza;
    string descripcionPieza;
    int cantidad;
    int precioPorArticulo;
};

int main() {
    Factura factura1("A123", "Martillo de acero", 5, 50);
    cout << "Factura de Ferreteria" << endl;
    cout << "Pieza: " << factura1.obtenerNumeroPieza() << endl;
    cout << "Descripcion: " << factura1.obtenerDescripcionPieza() << endl;
    cout << "Cantidad: " << factura1.obtenerCantidad() << endl;
    cout << "Precio por unidad: Q" << factura1.obtenerPrecioPorArticulo() << endl;
    cout << "Monto total: Q" << factura1.obtenerMontoFactura() << endl;

    cout << "\n--- Probando validacion con valores negativos ---" << endl;
    factura1.establecerCantidad(-10);
    factura1.establecerPrecioPorArticulo(-5);

    cout << "Cantidad (post-validacion): " << factura1.obtenerCantidad() << endl;
    cout << "Precio (post-validacion): " << factura1.obtenerPrecioPorArticulo() << endl;
    cout << "Nuevo monto total: Q" << factura1.obtenerMontoFactura() << endl;

    return 0;
}
