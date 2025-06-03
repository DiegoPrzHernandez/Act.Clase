#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    
    double pagoMensual = 15000.0;
    double interesMensual = 0.037; // 3.7% mensual
    int duracionAnios = 15;
    int totalPeriodos = duracionAnios * 12;
    
    double ahorroTotal = pagoMensual * ((pow(1 + interesMensual, totalPeriodos) - 1) / interesMensual);
    
    cout << "El total acumulado tras " << duracionAnios << " anos de ahorro es: $" << ahorroTotal << endl;

    return 0;
}
