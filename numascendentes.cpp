#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    const int TAM = 10;
    float numeros[TAM];

    
    cout << "Ingresa 10 numeros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    sort(numeros, numeros + TAM);

    cout << "\nNumeros ordenados en forma ascendente:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;
    return 0;
}
