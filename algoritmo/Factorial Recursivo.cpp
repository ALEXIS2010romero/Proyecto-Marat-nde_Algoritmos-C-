#include <iostream>

// Función que implementa el algoritmo de Factorial Recursivo
long long factorial_recursivo(int n) {
    // 1. Caso Base: Si n es 0 o 1, la función se detiene y devuelve 1.
    if (n <= 1) {
        return 1;
    }
    
    // 2. Paso Recursivo: La función se llama a sí misma con (n - 1)
    // Multiplica n por el resultado del factorial de (n - 1).
    return n * factorial_recursivo(n - 1);
}

int main() {
    int numero = 5; // Queremos calcular 5!
    
    // Ejecución del algoritmo
    long long resultado = factorial_recursivo(numero);
    
    // Mostrar el resultado
    std::cout << "El factorial de " << numero << " (calculado recursivamente) es: " 
              << resultado << std::endl; 
    // Output: 120 (5 * 4 * 3 * 2 * 1)

    // Otro ejemplo
    numero = 7;
    resultado = factorial_recursivo(numero);
    std::cout << "El factorial de " << numero << " es: " << resultado << std::endl; 
    // Output: 5040

    return 0;
}