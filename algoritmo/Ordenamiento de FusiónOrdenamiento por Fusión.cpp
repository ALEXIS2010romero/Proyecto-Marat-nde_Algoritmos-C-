#include <iostream>
#include <vector>
#include <algorithm>

// Función auxiliar para fusionar dos sub-arrays ordenados
void merge(std::vector<int>& datos, int izquierda, int medio, int derecha) {
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;

    // Crear arrays temporales
    std::vector<int> L(n1);
    std::vector<int> R(n2);

    // Copiar datos a los arrays temporales L[] y R[]
    for (int i = 0; i < n1; i++)
        L[i] = datos[izquierda + i];
    for (int j = 0; j < n2; j++)
        R[j] = datos[medio + 1 + j];

    int i = 0; // Índice inicial del primer sub-array
    int j = 0; // Índice inicial del segundo sub-array
    int k = izquierda; // Índice inicial del array fusionado

    // Fusionar los arrays temporales de vuelta a datos[izquierda..derecha]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            datos[k] = L[i];
            i++;
        } else {
            datos[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiar los elementos restantes de L[] (si los hay)
    while (i < n1) {
        datos[k] = L[i];
        i++;
        k++;
    }

    // Copiar los elementos restantes de R[] (si los hay)
    while (j < n2) {
        datos[k] = R[j];
        j++;
        k++;
    }
}

// Función principal que implementa el algoritmo Merge Sort (recursivo)
void merge_sort(std::vector<int>& datos, int izquierda, int derecha) {
    if (izquierda < derecha) {
        // Encontrar el punto medio del array
        int medio = izquierda + (derecha - izquierda) / 2;

        // Llamadas recursivas para ordenar la primera y segunda mitad
        merge_sort(datos, izquierda, medio);
        merge_sort(datos, medio + 1, derecha);

        // Fusionar las mitades ordenadas
        merge(datos, izquierda, medio, derecha);
    }
}

int main() {
    // Definición de los datos desordenados
    std::vector<int> numeros = {38, 27, 43, 3, 9, 82, 10};
    int n = numeros.size();
    
    std::cout << "Vector original: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Ejecución del algoritmo
    merge_sort(numeros, 0, n - 1);
    
    // Mostrar el resultado
    std::cout << "Vector ordenado con Merge Sort: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl; 
    // Output: 3 9 10 27 38 43 82

    return 0;
}