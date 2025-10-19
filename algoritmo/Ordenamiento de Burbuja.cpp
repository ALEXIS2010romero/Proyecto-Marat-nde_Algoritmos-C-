#include <iostream>
#include <vector>
#include <algorithm>

// Función para imprimir el vector
void imprimir_vector(const std::vector<int>& vec) {
    std::cout << "[ ";
    for (int x : vec) {
        std::cout << x << " ";
    }
    std::cout << "]" << std::endl;
}

// Algoritmo de Ordenamiento de Burbuja
void ordenamiento_burbuja(std::vector<int>& arr) {
    int n = arr.size();
    bool intercambiado;

    // Recorre todos los elementos del arreglo
    for (int i = 0; i < n - 1; ++i) {
        intercambiado = false;
        
        // Compara elementos adyacentes
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Intercambia arr[j] y arr[j+1]
                std::swap(arr[j], arr[j + 1]);
                intercambiado = true;
            }
        }
        
        // Si no se hizo ningún intercambio en el paso, el arreglo ya está ordenado
        if (!intercambiado) break;
    }
}

int main() {
    std::vector<int> datos = {64, 34, 25, 12, 22, 11, 90};
    
    std::cout << "--- Algoritmo de Ordenamiento de Burbuja ---" << std::endl;
    std::cout << "Vector Original: ";
    imprimir_vector(datos);

    ordenamiento_burbuja(datos);

    std::cout << "Vector Ordenado: ";
    imprimir_vector(datos);
    
    return 0;
}