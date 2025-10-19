#include <iostream>
#include <vector>

// Función que implementa el algoritmo de Búsqueda Lineal
int busqueda_lineal(const std::vector<int>& datos, int objetivo) {
    // 1. Iterar sobre cada elemento del vector
    for (int i = 0; i < datos.size(); ++i) {
        
        // 2. Comparar el elemento actual con el objetivo
        if (datos[i] == objetivo) {
            
            // 3. Si se encuentra, devolver la posición (índice)
            return i; 
        }
    }
    
    // 4. Si el bucle termina sin encontrar el objetivo, devolver -1
    // (o cualquier valor que indique que no fue encontrado)
    return -1; 
}

int main() {
    // Definición de los datos
    std::vector<int> numeros = {45, 12, 88, 5, 60, 23, 7};
    int valor_a_buscar = 60;
    
    // Ejecución del algoritmo
    int indice_encontrado = busqueda_lineal(numeros, valor_a_buscar);
    
    // Mostrar el resultado
    if (indice_encontrado != -1) {
        std::cout << "El valor " << valor_a_buscar 
                  << " fue encontrado en el índice: " << indice_encontrado 
                  << std::endl; // Output: 4
    } else {
        std::cout << "El valor " << valor_a_buscar 
                  << " no fue encontrado en el vector." << std::endl;
    }
    
    // Prueba con un valor que no existe
    valor_a_buscar = 99;
    indice_encontrado = busqueda_lineal(numeros, valor_a_buscar);
    
    if (indice_encontrado == -1) {
        std::cout << "El valor " << valor_a_buscar 
                  << " no fue encontrado, como se esperaba." << std::endl;
    }

    return 0;
}