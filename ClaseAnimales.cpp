#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Clase base
class Animal {
protected:
    string nombre;
    int patas;
    bool tiene_pelo;
    bool pone_huevos;
    bool columna_vertebral;

public:
    Animal(string n, int p, bool pelo, bool huevos, bool columna)
        : nombre(n), patas(p), tiene_pelo(pelo), pone_huevos(huevos), columna_vertebral(columna) {}

    virtual void mostrarInformacion() const = 0;

    virtual ~Animal() {}
};
                                                  /// Sub clases 
// Clase Mamífero
class Mamifero : public Animal {
public:
    Mamifero(string n, int p)
        : Animal(n, p, true, false, true) {}

    void mostrarInformacion() const {
        cout << "\nEspecie: Mamifero" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Numero de patas: " << patas << endl;
        cout << "Tiene pelo: Si" << endl;
        cout << "Pone huevos: No" << endl;
        cout << "Tiene columna vertebral: Si" << endl;
    }
};

// Clase Ave
class Ave : public Animal {
public:
    Ave(string n, int p)
        : Animal(n, p, false, true, true) {}

    void mostrarInformacion() const {
        cout << "\nEspecie: Ave" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Número de patas: " << patas << endl;
        cout << "Tiene pelo: No" << endl;
        cout << "Pone huevos: Si" << endl;
        cout << "Tiene columna vertebral: Si" << endl;
    }
};

// Clase Invertebrado
class Invertebrado : public Animal {
public:
    Invertebrado(string n, int p)
        : Animal(n, p, false, true, false) {}

    void mostrarInformacion() const {
        cout << "\nEspecie: Invertebrado" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Número de patas: " << patas << endl;
        cout << "Tiene pelo: No" << endl;
        cout << "Pone huevos: Si" << endl;
        cout << "Tiene columna vertebral: No" << endl;
    }
};

// Clase Reptil
class Reptil : public Animal {
public:
    Reptil(string n, int p)
        : Animal(n, p, false, true, true) {}

    void mostrarInformacion() const {
        cout << "\nEspecie: Reptil" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Número de patas: " << patas << endl;
        cout << "Tiene pelo: No" << endl;
        cout << "Pone huevos: Si" << endl;
        cout << "Tiene columna vertebral: Si" << endl;
    }
};

// Clasificación automática
Animal* clasificarAnimal(string nombre, int patas, bool tiene_pelo, bool pone_huevos, bool columna_vertebral) {
    if (tiene_pelo)
    return new Mamifero(nombre, patas);
    else if (!tiene_pelo && columna_vertebral && pone_huevos && patas == 2)
        return new Ave(nombre, patas);
    else if (!columna_vertebral)
        return new Invertebrado(nombre, patas);
    else if (!tiene_pelo && columna_vertebral && pone_huevos)
        return new Reptil(nombre, patas);
    else
        return NULL;
}

int main() {
    vector<Animal*> animales;

    animales.push_back(clasificarAnimal("Perro", 4, true, false, true));
    animales.push_back(clasificarAnimal("Gallina", 2, false, true, true));
    animales.push_back(clasificarAnimal("Pulpo", 8, false, true, false));
    animales.push_back(clasificarAnimal("Iguana", 4, false, true, true));

    for (size_t i = 0; i < animales.size(); ++i) {
        if (animales[i]) {
            animales[i]->mostrarInformacion();
            delete animales[i];
        } else {
            cout << "\nAnimal desconocido." << endl;
        }
    }

    return 0;
}

