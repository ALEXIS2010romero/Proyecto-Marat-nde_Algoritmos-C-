#include <iostream>
#include <iomanip>
#include <limits> // Para numeric_limits

void calcular_segmento_tales() {
    double A, B, C, X;

    std::cout << "--- Solucionador del Teorema de Tales (Proporcionalidad) ---" << std::endl;
    std::cout << "Dada la proporción A/B = C/X, ingresa los valores conocidos para encontrar X." << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;

    // Función auxiliar para obtener la entrada con validación
    auto obtener_valor = [](const std::string& nombre) -> double {
        double valor;
        while (true) {
            std::cout << "Ingresa el valor del segmento " << nombre << ": ";
            if (!(std::cin >> valor)) {
                std::cout << "[ERROR] Entrada inválida. Intenta con un número positivo." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else if (valor <= 0) {
                 std::cout << "[ERROR] El valor del segmento debe ser positivo." << std::endl;
            } else {
                return valor;
            }
        }
    };

    // Obtener las tres longitudes conocidas
    A = obtener_valor("A");
    B = obtener_valor("B");
    C = obtener_valor("C");

    // Aplicar la fórmula del Teorema de Tales para despejar X:
    // A/B = C/X  =>  X = (C * B) / A
    X = (C * B) / A;

    // --- Salida de Resultados ---
    std::cout << "\n=====================================" << std::endl;
    std::cout << "Resultado usando el Teorema de Tales:" << std::endl;
    
    std::cout << std::fixed << std::setprecision(4); // Formato de salida con 4 decimales
    
    std::cout << "Dado que: " << A << " / " << B << " = " << C << " / X" << std::endl;
    std::cout << "El valor del segmento desconocido (X) es: " << X << std::endl;
    std::cout << "Comprobación: " << (A / B) << " = " << (C / X) << std::endl;
    std::cout << "=====================================" << std::endl;
}

int main() {
    calcular_segmento_tales();
    return 0;
}