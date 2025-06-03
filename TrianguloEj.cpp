///desarrollar un programa que permita calcular el area de un triangulo apartir de la longitud de la base y altura

#include <iostream>
using namespace std;

//// Definición de la clase Triangulo
class Triangulo {
    private:
    float base;
    float altura;

    public:
    //// Metodo para establecer la base y la altura
    void EstablecerDimensiones(float b, float h) {
        base = b;
        altura = h;
    }

    // Metodo para calcular el área
    float calcularArea() {
    return (base * altura) / 2;
    }
};

int main() {
    Triangulo _Triangulo;
    float base, altura;

    cout << "Ingrese la base del triangulo: ";
    cin >> base;

    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;

    // Establecer las dimensiones en el objeto
    _Triangulo.EstablecerDimensiones(base, altura);

    // Mostrar el resultado
    cout << "El area del triangulo es: " << _Triangulo.calcularArea() << endl;

    return 0;
}


