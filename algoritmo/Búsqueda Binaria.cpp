#include <iostream>
#include <vector>
#include <algorithm>

int busqueda_binaria(const std::vector<int>& arr, int objetivo) {
    int izquierda = 0;
    int derecha = arr.size() - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (arr[medio] == objetivo) {
            return medio; // ¡Encontrado!
        }
        
        // Si el objetivo es mayor, descartar la mitad izquierda
        if (arr[medio] < objetivo) {
            izquierda = medio + 1;
        } 
        // Si el objetivo es menor, descartar la mitad derecha
        else {
            derecha = medio - 1;
        }
    }

    return -1; // No encontrado
}

int main() {
    std::vector<int> datos = {10, 25, 33, 40, 51, 67, 72, 80};
    int valor_buscar = 51;
    
    std::cout << "--- Búsqueda Binaria ---" << std::endl;
    std::cout << "Buscando " << valor_buscar << " en el vector ordenado." << std::endl;

    int indice = busqueda_binaria(datos, valor_buscar);

    if (indice != -1) {
        std::cout << "Resultado: El elemento fue encontrado en el índice: " << indice << std::endl;
    } else {
        std::cout << "Resultado: El elemento no se encontró." << std::endl;
    }

    return 0;
}