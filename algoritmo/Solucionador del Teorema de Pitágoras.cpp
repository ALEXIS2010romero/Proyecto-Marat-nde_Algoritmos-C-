#include <iostream>
#include <cmath> // Necesaria para std::sqrt() y std::pow()
#include <iomanip> // Necesaria para std::setprecision

void calcular_pitagoras() {
    int opcion;
    double lado1, lado2, resultado;

    std::cout << "--- Solucionador del Teorema de Pitágoras ---" << std::endl;
    std::cout << "Elige qué lado deseas calcular:" << std::endl;
    std::cout << "1. La Hipotenusa (c)" << std::endl;
    std::cout << "2. Un Cateto (a o b)" << std::endl;
    std::cout << "Tu opción (1 o 2): ";
    
    if (!(std::cin >> opcion) || (opcion != 1 && opcion != 2)) {
        std::cout << "[ERROR] Opción inválida. Saliendo." << std::endl;
        return;
    }

    std::cout << std::fixed << std::setprecision(4); // Formato de salida

    if (opcion == 1) {
        // --- Cálculo de la Hipotenusa (c) ---
        std::cout << "Ingresa la longitud del primer cateto (a): ";
        if (!(std::cin >> lado1) || lado1 <= 0) {
            std::cout << "[ERROR] Entrada inválida o no positiva." << std::endl; return;
        }
        std::cout << "Ingresa la longitud del segundo cateto (b): ";
        if (!(std::cin >> lado2) || lado2 <= 0) {
            std::cout << "[ERROR] Entrada inválida o no positiva." << std::endl; return;
        }
        
        // Fórmula: c = sqrt(a^2 + b^2)
        resultado = std::sqrt(std::pow(lado1, 2) + std::pow(lado2, 2));

        std::cout << "\n=====================================" << std::endl;
        std::cout << "Cálculo de la HIPOTENUSA (c):" << std::endl;
        std::cout << lado1 << "^2 + " << lado2 << "^2 = " << resultado << "^2" << std::endl;
        std::cout << "La hipotenusa (c) es: " << resultado << std::endl;
        std::cout << "=====================================" << std::endl;

    } else if (opcion == 2) {
        // --- Cálculo de un Cateto (a o b) ---
        std::cout << "Ingresa la longitud de la Hipotenusa (c): ";
        if (!(std::cin >> lado1) || lado1 <= 0) {
            std::cout << "[ERROR] Entrada inválida o no positiva." << std::endl; return;
        }
        std::cout << "Ingresa la longitud del otro Cateto (b): ";
        if (!(std::cin >> lado2) || lado2 <= 0) {
            std::cout << "[ERROR] Entrada inválida o no positiva." << std::endl; return;
        }

        if (lado2 >= lado1) {
            std::cout << "[ERROR] El cateto (b) debe ser menor que la hipotenusa (c)." << std::endl;
            return;
        }

        // Fórmula: a = sqrt(c^2 - b^2)
        resultado = std::sqrt(std::pow(lado1, 2) - std::pow(lado2, 2));

        std::cout << "\n=====================================" << std::endl;
        std::cout << "Cálculo del CATETO desconocido (a):" << std::endl;
        std::cout << lado1 << "^2 - " << lado2 << "^2 = " << resultado << "^2" << std::endl;
        std::cout << "El cateto (a) es: " << resultado << std::endl;
        std::cout << "=====================================" << std::endl;
    }
}

int main() {
    calcular_pitagoras();
    return 0;
}