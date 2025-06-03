#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int totalAnios = 10;
    int totalMeses = totalAnios * 12;
    double aporteMensual = 1000.0;
    double interesMensual = 0.03;
    double totalAhorrado = 0.0;

    totalAhorrado = aporteMensual * ((pow(1 + interesMensual, totalMeses) - 1) / interesMensual);

    
    cout << "Despues de " << totalAnios << " anos de ahorro mensual, el total acumulado es: $" << totalAhorrado << endl;

    return 0;
}
