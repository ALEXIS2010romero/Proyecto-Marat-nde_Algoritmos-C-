#include <iostream>
#include <cmath> // Necesaria para la función sqrt()

void calcular_raiz_cuadrada() {
    double numero;
    double resultado;

    std::cout << "--- Calculadora de Raíz Cuadrada ---" << std::endl;
    std::cout << "Ingresa un número no negativo: ";
    
    // Leer el número
    if (!(std::cin >> numero)) {
        std::cout << "[ERROR] Entrada inválida. Debes ingresar un número." << std::endl;
        return;
    }

    // Verificar si el número es negativo, ya que la raíz cuadrada de un negativo
    // en los reales produce un número complejo (aunque std::sqrt lo maneja de otra forma)
    if (numero < 0) {
        std::cout << "[ERROR] No se puede calcular la raíz cuadrada de un número negativo en el dominio real." << std::endl;
    } else {
        // Calcular la raíz cuadrada
        resultado = std::sqrt(numero);
        
        std::cout << "\nLa raíz cuadrada de " << numero << " es: " << resultado << std::endl;
    }
}

int main() {
    calcular_raiz_cuadrada();
    return 0;
}