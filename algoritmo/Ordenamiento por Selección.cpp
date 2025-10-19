#include <iostream>
#include <vector>
#include <algorithm> // Necesario para std::swap

// Función que implementa el algoritmo de Ordenamiento por Selección
void ordenamiento_por_seleccion(std::vector<int>& datos) {
    int n = datos.size();
    
    // Bucle externo: Itera a través de todos los elementos para colocarlos en su posición correcta.
    for (int i = 0; i < n - 1; ++i) {
        
        // Asume que el elemento actual es el mínimo.
        int indice_minimo = i;
        
        // Bucle interno: Busca el elemento más pequeño en el resto de la lista desordenada.
        for (int j = i + 1; j < n; ++j) {
            
            // Si encuentra un elemento más pequeño, actualiza el índice_minimo.
            if (datos[j] < datos[indice_minimo]) {
                indice_minimo = j;
            }
        }
        
        // Intercambia el elemento mínimo encontrado con el elemento actual (datos[i]).
        // Esto coloca el mínimo en su posición final ordenada.
        if (indice_minimo != i) {
            std::swap(datos[i], datos[indice_minimo]);
        }
    }
}

int main() {
    // Definición de los datos desordenados
    std::vector<int> numeros = {64, 25, 12, 22, 11};
    
    std::cout << "Vector original: ";
    for (int n : numeros) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    
    // Ejecución del algoritmo
    ordenamiento_por_seleccion(numeros);
    
    // Mostrar el resultado
    std::cout << "Vector ordenado con Selection Sort: ";
    for (int n : numeros) {
        std::cout << n << " ";
    }
    std::cout << std::endl; 
    // Output: 11 12 22 25 64

    return 0;
}