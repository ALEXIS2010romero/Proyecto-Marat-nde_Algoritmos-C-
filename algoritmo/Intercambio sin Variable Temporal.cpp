#include <iostream>

// Función que implementa el algoritmo de Intercambio sin Variable Temporal
void intercambio_sin_temp(int& a, int& b) {
    std::cout << "Original: a = " << a << ", b = " << b << std::endl;
    
    // Paso 1: 'a' almacena la suma de los valores originales
    a = a + b; // Nuevo 'a' = (a_original + b_original)
    
    // Paso 2: 'b' obtiene el valor original de 'a'
    // Nuevo 'b' = (a_original + b_original) - b_original = a_original
    b = a - b; 
    
    // Paso 3: 'a' obtiene el valor original de 'b'
    // Nuevo 'a' = (a_original + b_original) - a_original = b_original
    a = a - b; 
}

int main() {
    int x = 15;
    int y = 5;
    
    std::cout << "--- Intercambio de Variables sin Variable Temporal ---" << std::endl;
    
    // Ejecución del algoritmo
    intercambio_sin_temp(x, y);
    
    // Mostrar el resultado
    std::cout << "Intercambiado: x = " << x << ", y = " << y << std::endl; 
    // Output: x = 5, y = 15

    return 0;
}