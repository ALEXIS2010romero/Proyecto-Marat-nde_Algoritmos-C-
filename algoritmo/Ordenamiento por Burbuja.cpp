#include <iostream>
#include <vector>
#include <algorithm> // Necesario para std::swap

// Función que implementa el algoritmo de Ordenamiento por Burbuja
void ordenamiento_burbuja(std::vector<int>& datos) {
    int n = datos.size();
    bool intercambiado;
    
    // Bucle externo: controla las pasadas (iteraciones)
    for (int i = 0; i < n - 1; ++i) {
        intercambiado = false;
        
        // Bucle interno: realiza las comparaciones e intercambios
        // La comparación llega hasta n - 1 - i porque los últimos i elementos
        // ya están en su posición final correcta.
        for (int j = 0; j < n - 1 - i; ++j) {
            
            // Si el elemento actual es mayor que el siguiente
            if (datos[j] > datos[j + 1]) {
                
                // Intercambiar (swap) los elementos
                std::swap(datos[j], datos[j + 1]);
                intercambiado = true;
            }
        }
        
        // Optimización: Si no hubo intercambios en la pasada, la lista ya está ordenada
        if (intercambiado == false) {
            break; 
        }
    }
}

int main() {
    // Definición de los datos desordenados
    std::vector<int> numeros = {64, 34, 25, 12, 22, 11, 90};
    
    // Ejecución del algoritmo
    ordenamiento_burbuja(numeros);
    
    // Mostrar el resultado
    std::cout << "Vector ordenado con Bubble Sort: ";
    for (int n : numeros) {
        std::cout << n << " ";
    }
    std::cout << std::endl; 
    // Output: 11 12 22 25 34 64 90

    return 0;
}