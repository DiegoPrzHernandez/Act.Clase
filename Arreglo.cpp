#include <iostream>
#include <queue>
using namespace std;
class Fifo {
private:
    std::queue<int> cola;
    int capacidad;
public:
    Fifo(int cap) {
        capacidad = cap;
    }

    void Push(int valor) {
        if (cola.size() < capacidad) {
            cola.push(valor);
        } else {
            std::cout << "La cola est� llena. No se puede agregar m�s elementos.\n";
        }
    }

    int Pop() {
        if (!cola.empty()) {
            int valor = cola.front();
            cola.pop();
            return valor;
        } else {
            std::cout << "La cola est� vac�a.\n";
            return -1; // o alg�n valor para indicar vac�o
        }
    }

    void Imprimir() {
        std::queue<int> copia = cola;
        while (!copia.empty()) {
            std::cout << copia.front() << " ";
            copia.pop();
        }
        std::cout << std::endl;
    }
};

int main() {
    int dato;
    Fifo obj(7);

    std::cout << "Estructura de datos Fifo\n";
    obj.Push(4);
    obj.Push(7);
    obj.Push(2);
    obj.Push(7);
    obj.Push(7);

    std::cout << "Los elementos en Fifo son:\n";
    obj.Imprimir();

    dato = obj.Pop();
    std::cout << "El elemento sacado es: " << dato << std::endl;

    std::cout << "Los elementos que quedan en FIFO son:\n";
    obj.Imprimir();

    return 0;
}

