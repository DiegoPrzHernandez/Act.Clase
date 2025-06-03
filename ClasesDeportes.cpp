#include <iostream>
#include <string>
using namespace std;

// Clase base: Deporte
class Deporte {
protected:
    string nombre;
    int numeroJugadores;
    string tipoBalon;

public:
    Deporte(string nom, int jugadores, string balon)
        : nombre(nom), numeroJugadores(jugadores), tipoBalon(balon) {}

    void mostrarDatos() const {
        cout << "Deporte: " << nombre << endl;
        cout << "Jugadores por equipo: " << numeroJugadores << endl;
        cout << "Tipo de balon/pelota: " << tipoBalon << endl;
    }
};

// Clase derivada: Béisbol (manos)
class Beisbol : public Deporte {
public:
    Beisbol() : Deporte("Beisbol", 9, "Pelota de beisbol") {}

    void tipoContacto() const {
        cout << "Se juega principalmente con las manos (guante y bate)." << endl;
    }
};

// Clase derivada: Fútbol (pies)
class Futbol : public Deporte {
public:
    Futbol() : Deporte("Futbol", 11, "Balon esferico") {}

    void tipoContacto() const {
        cout << "Se juega principalmente con los pies." << endl;
    }
};

// Clase derivada: Básquetbol (manos)
class Basquetbol : public Deporte {
public:
    Basquetbol() : Deporte("Basquetbol", 5, "Balon grande y ligero") {}

    void tipoContacto() const {
        cout << "Se juega principalmente con las manos." << endl;
    }
};

int main() {
    // Crear objetos
    Beisbol beisbol;
    Futbol futbol;
    Basquetbol basquet;

    // Mostrar datos de cada deporte
    cout << "--- Deportes con balon/pelota ---" << endl;
    cout << endl;

    beisbol.mostrarDatos();
    beisbol.tipoContacto();
    cout << endl;

    futbol.mostrarDatos();
    futbol.tipoContacto();
    cout << endl;

    basquet.mostrarDatos();
    basquet.tipoContacto();
    cout << endl;

    return 0;
}

