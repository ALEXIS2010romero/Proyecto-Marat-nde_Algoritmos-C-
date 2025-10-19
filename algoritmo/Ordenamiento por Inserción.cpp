#include <iostream>
#include <vector>

// Función que implementa el algoritmo de Ordenamiento por Inserción
void ordenamiento_por_insercion(std::vector<int>& datos) {
    int n = datos.size();
    
    // Bucle externo: Comienza en el segundo elemento (índice 1) 
    // porque el primer elemento (índice 0) se considera trivialmente ordenado.
    for (int i = 1; i < n; ++i) {
        
        // La clave es el elemento que vamos a insertar en la sublista ordenada
        int clave = datos[i];
        int j = i - 1; 

        // Bucle interno: Mueve los elementos de la sublista ordenada (datos[0...i-1])
        // que son mayores que la clave, una posición hacia adelante
        while (j >= 0 && datos[j] > clave) {
            datos[j + 1] = datos[j];
            j = j - 1;
        }
        
        // Inserta la clave en su posición correcta en la sublista ordenada
        datos[j + 1] = clave;
    }
}

int main() {
    // Definición de los datos desordenados
    std::vector<int> numeros = {12, 11, 13, 5, 6};
    
    std::cout << "Vector original: ";
    for (int n : numeros) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    
    // Ejecución del algoritmo
    ordenamiento_por_insercion(numeros);
    
    // Mostrar el resultado
    std::cout << "Vector ordenado con Insertion Sort: ";
    for (int n : numeros) {
        std::cout << n << " ";
    }
    std::cout << std::endl; 
    // Output: 5 6 11 12 13

    return 0;
}