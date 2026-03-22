#include <iostream>
#include <string>

using namespace std;

class PerfilMedico {
public:
    PerfilMedico(string nombre, string apellido, string s, int d, int m, int a, int h, double w)
        : primerNombre(nombre), apellidoPersona(apellido), sexo(s),
          diaNacimiento(d), mesNacimiento(m), anioNacimiento(a),
          altura(h), peso(w) {}
    void establecerPrimerNombre(string nombre) { primerNombre = nombre; }
    string obtenerPrimerNombre() const { return primerNombre; }

    void establecerApellido(string apellido) { apellidoPersona = apellido; }
    string obtenerApellido() const { return apellidoPersona; }

    void establecerSexo(string s) { sexo = s; }
    string obtenerSexo() const { return sexo; }

    void establecerPeso(double w) { peso = (w > 0) ? w : 0; }
    double obtenerPeso() const { return peso; }

    void establecerAltura(int h) { altura = (h > 0) ? h : 0; }
    int obtenerAltura() const { return altura; }
    int obtenerEdad() const {
        int anioActual = 2026;
        return anioActual - anioNacimiento;
    }
    int obtenerFrecuenciaCardiacaMaxima() const {
        return 220 - obtenerEdad();
    }

    void mostrarRangoFrecuenciaCardiaca() const {
        int fcm = obtenerFrecuenciaCardiacaMaxima();
        cout << (fcm * 0.5) << " - " << (fcm * 0.85) << " lpm";
    }

    double obtenerBMI() const {
        double alturaEnMetros = altura / 100.0;
        return peso / (alturaEnMetros * alturaEnMetros);
    }

private:
    string primerNombre;
    string apellidoPersona;
    string sexo;
    int diaNacimiento, mesNacimiento, anioNacimiento;
    int altura;
    double peso;
};

void mostrarTablaBMI() {
    cout << "\nVALORES DEL BMI" << endl;
    cout << "Bajo peso: menos de 18.5" << endl;
    cout << "Normal:    entre 18.5 y 24.9" << endl;
    cout << "Sobrepeso: entre 25 y 29.9" << endl;
    cout << "Obeso:     30 o mas" << endl;
}

int main() {
    string n, a, s;
    int d, m, an, alt;
    double p;

    cout << "--- Registro de Perfil Medico ---" << endl;
    cout << "Nombre y Apellido: "; cin >> n >> a;
    cout << "Sexo (M/F): "; cin >> s;
    cout << "Fecha de nacimiento (DD MM AAAA): "; cin >> d >> m >> an;
    cout << "Altura (cm) y Peso (kg): "; cin >> alt >> p;

    PerfilMedico paciente(n, a, s, d, m, an, alt, p);

    cout << "\n--- RESUMEN DEL PACIENTE ---" << endl;
    cout << "Paciente: " << paciente.obtenerPrimerNombre() << " " << paciente.obtenerApellido() << endl;
    cout << "Edad: " << paciente.obtenerEdad() << " anos" << endl;
    cout << "BMI: " << paciente.obtenerBMI() << endl;
    cout << "Frecuencia Cardiaca Maxima: " << paciente.obtenerFrecuenciaCardiacaMaxima() << endl;
    cout << "Rango Esperado: "; paciente.mostrarRangoFrecuenciaCardiaca();
    cout << endl;

    mostrarTablaBMI();

    return 0;
}
