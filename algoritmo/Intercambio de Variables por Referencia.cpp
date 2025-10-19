#include <iostream>

// Función que intercambia los valores de dos variables
// Usa referencias (&) para modificar directamente las variables originales
void intercambiar_valores(int& a, int& b) {
    int temporal = a;
    a = b;
    b = temporal;
    
    std::cout << "  (Dentro de la función) A = " << a << ", B = " << b << std::endl;
}

int main() {
    int valor_A = 100;
    int valor_B = 200;
    
    std::cout << "--- Intercambio por Referencia (Swap) ---" << std::endl;
    
    std::cout << "Valores originales: A = " << valor_A << ", B = " << valor_B << std::endl;

    intercambiar_valores(valor_A, valor_B);

    std::cout << "Valores finales (después de la llamada): A = " << valor_A << ", B = " << valor_B << std::endl;
    
    // Los valores de valor_A y valor_B han sido modificados permanentemente
    
    return 0;
}