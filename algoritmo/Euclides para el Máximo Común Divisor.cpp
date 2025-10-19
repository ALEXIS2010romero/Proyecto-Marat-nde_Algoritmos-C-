#include <iostream>

// Función que implementa el Algoritmo de Euclides de forma recursiva
int maximo_comun_divisor_euclides(int a, int b) {
    // 1. Caso Base (Condición de Parada)
    // Si b es 0, el MCD es a
    if (b == 0) {
        return a;
    }
    
    // 2. Paso Recursivo
    // La función se llama a sí misma con b y el resto de la división (a % b)
    return maximo_comun_divisor_euclides(b, a % b);
}

int main() {
    int num1 = 48;
    int num2 = 18;
    
    // Ejecución del algoritmo
    int mcd = maximo_comun_divisor_euclides(num1, num2);
    
    // Mostrar el resultado
    std::cout << "El MCD de " << num1 << " y " << num2 << " es: " 
              << mcd << std::endl; 
    // Output: 6
    // Pasos: MCD(48, 18) -> MCD(18, 12) -> MCD(12, 6) -> MCD(6, 0) -> 6

    // Otro ejemplo
    num1 = 105;
    num2 = 45;
    mcd = maximo_comun_divisor_euclides(num1, num2);
    std::cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd << std::endl; 
    // Output: 15

    return 0;
}