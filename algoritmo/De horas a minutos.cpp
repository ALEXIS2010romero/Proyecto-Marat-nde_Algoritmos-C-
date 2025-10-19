#include <iostream>
#include <limits> // Para limpiar el buffer

void convertir_horas_a_minutos() {
    double horas;
    double minutos_totales;

    std::cout << "--- Conversor de Horas a Minutos ---" << std::endl;
    std::cout << "Ingresa la cantidad total de horas (puede ser decimal): ";

    // 1. Obtener y validar la entrada
    if (!(std::cin >> horas)) {
        std::cout << "[ERROR] Entrada inválida. Debes ingresar un número." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    if (horas < 0) {
        std::cout << "[ERROR] La cantidad de horas no puede ser negativa." << std::endl;
        return;
    }

    // 2. Realizar el cálculo
    // Hay 60 minutos en una hora.
    minutos_totales = horas * 60.0; 

    // 3. Mostrar el resultado
    std::cout << "\n=====================================" << std::endl;
    std::cout << horas << " hora(s) equivalen a:" << std::endl;
    std::cout << minutos_totales << " minuto(s)." << std::endl;
    std::cout << "=====================================" << std::endl;
}

int main() {
    convertir_horas_a_minutos();
    return 0;
}