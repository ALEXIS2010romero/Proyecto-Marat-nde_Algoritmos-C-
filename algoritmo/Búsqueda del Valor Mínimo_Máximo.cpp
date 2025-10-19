#include <iostream>
#include <vector>
#include <limits> // Para std::numeric_limits

// Definición del tipo de retorno: un par de enteros {mínimo, máximo}
using MinMaxPair = std::pair<int, int>;

// Función que implementa el algoritmo Min/Max Search
MinMaxPair encontrar_min_max(const std::vector<int>& datos) {
    if (datos.empty()) {
        // Devolver el valor máximo/mínimo posible o un código de error si está vacío.
        // Aquí usamos los límites para indicar que no hay datos.
        return {std::numeric_limits<int>::max(), std::numeric_limits<int>::min()}; 
    }

    // Inicializar el mínimo y el máximo con el primer elemento
    int minimo_actual = datos[0];
    int maximo_actual = datos[0];

    // Iterar desde el segundo elemento (índice 1)
    for (size_t i = 1; i < datos.size(); ++i) {
        int elemento_actual = datos[i];
        
        // Comparar y actualizar el máximo
        if (elemento_actual > maximo_actual) {
            maximo_actual = elemento_actual;
        }

        // Comparar y actualizar el mínimo
        if (elemento_actual < minimo_actual) {
            minimo_actual = elemento_actual;
        }
    }

    // Devolver el par {mínimo, máximo}
    return {minimo_actual, maximo_actual};
}

int main() {
    // Definición de los datos
    std::vector<int> numeros = {45, 12, 88, 5, 60, 23, 7};
    
    std::cout << "Datos de entrada: ";
    for (int n : numeros) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    
    // Ejecución del algoritmo
    MinMaxPair resultado = encontrar_min_max(numeros);
    
    // Mostrar el resultado
    std::cout << "\n--- Resultado del Min/Max Search ---" << std::endl;
    std::cout << "Valor Mínimo: " << resultado.first << std::endl;  // Output: 5
    std::cout << "Valor Máximo: " << resultado.second << std::endl; // Output: 88

    return 0;
}