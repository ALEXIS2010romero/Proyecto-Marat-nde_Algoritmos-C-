#include <iostream>

int main() {
    // Definimos la cantidad de números a sumar
    const int CANTIDAD_NUMEROS = 16; // ¡Ajustado a 16!
    
    // Inicializamos la suma a cero.
    double numero;
    double suma_total = 0.0; 

    std::cout << "--- Sumador de " << CANTIDAD_NUMEROS << " Números ---\n";

    // El bucle 'for' se repetirá 16 veces
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