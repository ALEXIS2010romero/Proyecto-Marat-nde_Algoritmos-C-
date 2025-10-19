#include <iostream>
#include <limits> // Para limpiar el buffer

void perimetro_cuadrado() {
    double lado;

    std::cout << "--- Calculadora de Perímetro de Cuadrado ---" << std::endl;
    std::cout << "Ingresa la longitud del lado del cuadrado: ";

    // Obtener y validar la longitud del lado
    if (!(std::cin >> lado)) {
        std::cout << "[ERROR] Entrada inválida. Debes ingresar un número." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    
    if (lado <= 0) {
        std::cout << "[ERROR] El lado debe ser un valor positivo." << std::endl;
        return;
    }

    // 1. Calcular el Perímetro
    double perimetro = 4 * lado;

    // 2. Mostrar el resultado
    std::cout << "\n=====================================" << std::endl;
    std::cout << "Fórmula: P = 4 * Lado" << std::endl;
    std::cout << "Cálculo: P = 4 * " << lado << std::endl;
    std::cout << "El PERÍMETRO del cuadrado es: " << perimetro << std::endl;
    std::cout << "=====================================" << std::endl;
}

int main() {
    perimetro_cuadrado();
    return 0;
}