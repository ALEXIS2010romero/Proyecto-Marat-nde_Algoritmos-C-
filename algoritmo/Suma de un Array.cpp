#include <iostream>
#include <vector>
#include <numeric> // Para std::accumulate, aunque lo haremos de forma manual

// Función que implementa el algoritmo de suma
int sumar_vector(const std::vector<int>& datos) {
    // Inicializamos la suma a cero
    int suma = 0;

    // Iteramos sobre cada elemento del vector (algoritmo de recorrido)
    for (int elemento : datos) {
        // En cada paso, añadimos el elemento actual a la suma
        suma += elemento;
    }

    // Devolvemos el resultado final
    return suma;
}

int main() {
    // 1. Definición de los datos de entrada
    std::vector<int> numeros = {10, 20, 5, 15, 30};

    // 2. Ejecución del algoritmo
    int resultado = sumar_vector(numeros);

    // 3. Mostrar el resultado
    std::cout << "El vector es: ";
    for (int n : numeros) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    std::cout << "La suma total es: " << resultado << std::endl; // Debería ser 80

    return 0;
}