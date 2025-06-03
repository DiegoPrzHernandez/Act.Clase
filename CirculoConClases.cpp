#include <iostream>
#include <cmath> 
using namespace std;

class CirculoGeometrico {
private:
    float radioValor;

public:
    void definirRadio(float r) {
        radioValor = r;
    }

    float calcularSuperficie() const {
        return M_PI * pow(radioValor, 2);
    }

    float calcularLongitud() const {
        return 2 * M_PI * radioValor;
    }
};

int main() {
    CirculoGeometrico figura;
    float radioUsuario;

    cout << "Ingrese el radio del circulo: ";
    cin >> radioUsuario;

    if (radioUsuario <= 0) {
        cout << "Error: el radio debe ser un numero positivo." << endl;
        return 1;
    }

    figura.definirRadio(radioUsuario);

    cout << "Area del circulo: " << figura.calcularSuperficie() << endl;
    cout << "Perimetro del circulo: " << figura.calcularLongitud() << endl;

    return 0;
}
