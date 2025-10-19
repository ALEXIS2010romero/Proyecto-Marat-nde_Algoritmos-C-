#include <iostream>

int main() {
    // Definimos la cantidad de números a sumar
    const int CANTIDAD_NUMEROS = 11; // ¡Ajustado a 11!
    
    // Inicializamos la suma a cero. Usamos 'double' para permitir decimales.
    double numero;
    double suma_total = 0.0; 

    std::cout << "--- Sumador de " << CANTIDAD_NUMEROS << " Números ---\n";

    // El bucle 'for' se repetirá 11 veces
    for (int i = 1; i <= CANTIDAD_NUMEROS; ++i) {
        std::cout << "Ingresa el número #" << i << ": ";
        std::cin >> numero;
        
        // Acumulamos el número ingresado a la suma total
        suma_total += numero; 
    }

    // Mostramos el resultado final
    std::cout << "\nEl resultado total de la suma es: " << suma_total << std::endl;

    return 0;
}