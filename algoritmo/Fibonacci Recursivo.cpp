#include <iostream>

// Función recursiva para calcular el n-ésimo número de Fibonacci
// F(n) = F(n-1) + F(n-2)
int fibonacci_recursivo(int n) {
    // Casos base
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    
    // Llamada recursiva
    return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
}

void generar_serie_recursiva() {
    int limite = 10;
    
    std::cout << "--- Serie Fibonacci (Recursivo) ---" << std::endl;
    std::cout << "Los primeros " << limite << " números son:" << std::endl;
    
    // Generar e imprimir la serie hasta el límite
    for (int i = 0; i < limite; ++i) {
        std::cout << fibonacci_recursivo(i) << " ";
    }
    std::cout << "\n=====================================" << std::endl;
    
    // Ejemplo de un número específico
    int n = 7;
    std::cout << "El número Fibonacci en la posición " << n << " es: " << fibonacci_recursivo(n) << std::endl;
}

int main() {
    generar_serie_recursiva();
    return 0;
}