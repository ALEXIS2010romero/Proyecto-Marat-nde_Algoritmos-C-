#include <iostream>

int main() {
    // Definimos la cantidad de números a sumar
    const int CANTIDAD_NUMEROS = 9; // <--- ¡Cambiado a 9!
    
    // Inicializamos la suma a cero y declaramos la variable temporal para cada número
    double numero;
    double suma_total = 0.0; 

    std::cout << "--- Sumador de " << CANTIDAD_NUMEROS << " Números ---\n";

    // El bucle 'for' se repetirá 9 veces, pidiendo un número en cada iteración.
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