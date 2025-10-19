#include <iostream>
#include <vector>
#include <cmath> // Necesario para la función sqrt

// Función que implementa el algoritmo de la Criba de Eratóstenes
std::vector<int> criba_de_eratostenes(int N) {
    // 1. Inicialización: Crear el vector "primos" (la criba)
    // Inicialmente, todos los números hasta N se consideran primos (true).
    std::vector<bool> es_primo(N + 1, true); 
    es_primo[0] = es_primo[1] = false; // 0 y 1 no son primos

    // 2. Proceso de cribado
    // Solo necesitamos iterar hasta la raíz cuadrada de N
    for (int p = 2; p * p <= N; p++) {
        // Si es_primo[p] no ha cambiado, entonces p es un número primo
        if (es_primo[p] == true) {
            // Marcar todos los múltiplos de p como NO primos (false)
            // Empezamos desde p*p, ya que los múltiplos más pequeños (p*2, p*3, etc.)
            // ya habrán sido marcados por primos anteriores.
            for (int i = p * p; i <= N; i += p)
                es_primo[i] = false;
        }
    }

    // 3. Recolección de resultados
    std::vector<int> primos_encontrados;
    for (int p = 2; p <= N; p++) {
        if (es_primo[p]) {
            primos_encontrados.push_back(p);
        }
    }
    
    return primos_encontrados;
}

int main() {
    int limite = 30;
    
    std::cout << "Buscando números primos hasta " << limite << " usando la Criba de Eratóstenes:" << std::endl;
    
    // Ejecución del algoritmo
    std::vector<int> lista_primos = criba_de_eratostenes(limite);
    
    // Mostrar el resultado
    std::cout << "Números primos encontrados: ";
    for (int p : lista_primos) {
        std::cout << p << " ";
    }
    std::cout << std::endl; 
    // Output: 2 3 5 7 11 13 17 19 23 29

    return 0;
}