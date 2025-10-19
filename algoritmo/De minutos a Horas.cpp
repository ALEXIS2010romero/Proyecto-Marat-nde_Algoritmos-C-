#include <iostream>

void convertir_minutos_a_horas() {
    int minutos_totales;
    int horas;
    int minutos_restantes;

    std::cout << "--- Conversor de Minutos a Horas y Minutos ---" << std::endl;
    std::cout << "Ingresa la cantidad total de minutos: ";

    // 1. Obtener y validar la entrada
    if (!(std::cin >> minutos_totales) || minutos_totales < 0) {
        std::cout << "[ERROR] Entrada inválida. Debes ingresar un número entero no negativo." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    // 2. Realizar el cálculo
    // Hay 60 minutos en una hora.

    // Calcular las horas completas usando la división entera
    horas = minutos_totales / 60; 

    // Calcular los minutos restantes usando el operador módulo (%)
    minutos_restantes = minutos_totales % 60; 

    // 3. Mostrar el resultado
    std::cout << "\n=====================================" << std::endl;
    std::cout << minutos_totales << " minutos equivalen a:" << std::endl;
    std::cout << horas << " hora(s) y " << minutos_restantes << " minuto(s)." << std::endl;
    std::cout << "=====================================" << std::endl;
}

int main() {
    convertir_minutos_a_horas();
    return 0;
}