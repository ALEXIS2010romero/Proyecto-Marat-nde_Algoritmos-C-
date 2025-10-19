#include <iostream>
#include <vector>

// Algoritmo de Búsqueda Lineal
int busqueda_lineal(const std::vector<int>& arr, int objetivo) {
    // Recorre el arreglo desde el índice 0 hasta el final
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == objetivo) {
            return i; // ¡Encontrado! Devuelve el índice
        }
    }
    return -1; // No encontrado
}

int main() {
    std::vector<int> datos = {15, 7, 32, 4, 88, 11};
    int valor_buscar = 32;
    
    std::cout << "--- Búsqueda Lineal ---" << std::endl;
    std::cout << "Vector: [15, 7, 32, 4, 88, 11]" << std::endl;
    std::cout << "Buscando el valor: " << valor_buscar << std::endl;

    int indice = busqueda_lineal(datos, valor_buscar);

    if (indice != -1) {
        std::cout << "Resultado: El elemento fue encontrado en el índice: " << indice << std::endl;
    } else {
        std::cout << "Resultado: El elemento no se encontró." << std::endl;
    }

    return 0;
}