#include <iostream>
#include <vector>
#include <algorithm> // Necesario para std::swap

// Función de Partición: Coloca el pivote en su posición final correcta.
// Devuelve el índice del pivote.
int particion(std::vector<int>& datos, int bajo, int alto) {
    // Seleccionamos el elemento más a la derecha como pivote
    int pivote = datos[alto]; 
    int i = (bajo - 1); // Índice del elemento más pequeño

    for (int j = bajo; j <= alto - 1; ++j) {
        // Si el elemento actual es menor o igual que el pivote
        if (datos[j] <= pivote) {
            i++; 
            std::swap(datos[i], datos[j]);
        }
    }
    std::swap(datos[i + 1], datos[alto]);
    return (i + 1);
}

// Función principal que implementa el algoritmo Quick Sort (recursivo)
void quick_sort(std::vector<int>& datos, int bajo, int alto) {
    if (bajo < alto) {
        // particion_index es el índice donde el pivote está en la posición correcta
        int pi = particion(datos, bajo, alto);

        // Llamada recursiva para la sublista izquierda
        quick_sort(datos, bajo, pi - 1);
        
        // Llamada recursiva para la sublista derecha
        quick_sort(datos, pi + 1, alto);
    }
}

int main() {
    // Definición de los datos desordenados
    std::vector<int> numeros = {10, 80, 30, 90, 40, 50, 70};
    int n = numeros.size();
    
    std::cout << "Vector original: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Ejecución del algoritmo
    quick_sort(numeros, 0, n - 1);
    
    // Mostrar el resultado
    std::cout << "Vector ordenado con Quick Sort: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl; 
    // Output: 10 30 40 50 70 80 90

    return 0;
}