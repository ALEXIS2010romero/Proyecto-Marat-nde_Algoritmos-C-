#include <iostream>

int main() {
    // Definimos la cantidad de números a sumar
    const int CANTIDAD_NUMEROS = 6;
    
    // Inicializamos la suma a cero y declaramos la variable temporal para cada número
    double numero;
    double suma_total = 0.0; 

    std::cout << "--- Sumador de " << CANTIDAD_NUMEROS << " Números ---\n";

    // Usamos un bucle for para pedir los 6 números
    for (int i = 1; i <= CANTIDAD_NUMEROS; ++i) {
        std::cout << "Ingresa el número #" << i << ": ";
        std::cin >> numero;
        
        // Acumulamos el número ingresado a la suma total
        suma_total += numero; // Esto es una abreviación de: suma_total = suma_total + numero;
    }

    // Mostramos el resultado
    std::cout << "\nEl resultado total de la suma es: " << suma_total << std::endl;

    return 0;
}