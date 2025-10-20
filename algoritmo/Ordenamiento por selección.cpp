#include <iostream>
#include <vector>
#include <algorithm> // Para std::swap

// Función para imprimir el vector
void imprimir_vector(const std::vector<int>& vec) {
    std::cout << "[ ";
    for (int x : vec) {
        std::cout << x << " ";
    }
    std::cout << "]" << std::endl;
}

// Algoritmo de Ordenamiento por Selección
void ordenamiento_seleccion(std::vector<int>& arr) {
    int n = arr.size();

    // Recorrer el arreglo (n-1 veces)
    for (int i = 0; i < n - 1; ++i) {
        // Encontrar el índice del elemento mínimo en el resto del arreglo
        int indice_minimo = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[indice_minimo]) {
                indice_minimo = j;
            }
        }
        
        // Intercambiar el elemento mínimo encontrado con el elemento en la posición 'i'
        if (indice_minimo != i) {
            std::swap(arr[i], arr[indice_minimo]);
        }
    }
}

int main() {
    std::vector<int> datos = {29, 10, 14, 37, 13};
    
    std::cout << "--- Algoritmo de Ordenamiento por Selección ---" << std::endl;
    std::cout << "Vector Original: ";
    imprimir_vector(datos);

    ordenamiento_seleccion(datos);

    std::cout << "Vector Ordenado: ";
    imprimir_vector(datos);
    
    return 0;
}