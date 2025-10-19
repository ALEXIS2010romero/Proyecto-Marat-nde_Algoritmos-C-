#include <iostream>
#include <stdexcept> // Para std::runtime_error o otras excepciones

void dividir(double numerador, double denominador) {
    try {
        if (denominador == 0) {
            // Lanzar una excepción si el denominador es cero
            throw std::runtime_error("Error: División por cero no permitida.");
        }

        double resultado = numerador / denominador;
        std::cout << "Resultado de la división: " << resultado << std::endl;
        
    } catch (const std::runtime_error& e) {
        // Capturar y manejar la excepción
        std::cerr << "Excepción capturada: " << e.what() << std::endl;
    } catch (...) {
        // Capturar cualquier otra excepción desconocida
        std::cerr << "Se capturó una excepción inesperada." << std::endl;
    }
}

int main() {
    std::cout << "--- Manejo de Excepciones (División) ---" << std::endl;
    
    // Caso 1: División válida
    std::cout << "\nIntento 1 (10 / 2):" << std::endl;
    dividir(10.0, 2.0);

    // Caso 2: División por cero (manejo de error)
    std::cout << "\nIntento 2 (8 / 0):" << std::endl;
    dividir(8.0, 0.0);

    return 0;
}