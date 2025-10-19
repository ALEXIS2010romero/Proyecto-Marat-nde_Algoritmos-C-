#include <iostream>
#include <vector>

// Función que implementa el algoritmo de Búsqueda Binaria
int busqueda_binaria(const std::vector<int>& datos, int objetivo) {
    int izquierda = 0;
    int derecha = datos.size() - 1; // Último índice del vector

    // Mientras el espacio de búsqueda sea válido (izquierda no haya superado a derecha)
    while (izquierda <= derecha) {
        
        // 1. Calcular el índice medio
        // Se usa esta forma para evitar un posible desbordamiento (overflow)
        int medio = izquierda + (derecha - izquierda) / 2;

        // 2. Comparación principal: Se encontró el objetivo
        if (datos[medio] == objetivo) {
            return medio; // Devolvemos el índice donde se encuentra
        } 
        
        // 3. Si el elemento medio es menor que el objetivo, 
        // el objetivo debe estar en la mitad derecha.
        else if (datos[medio] < objetivo) {
            izquierda = medio + 1; // Descartamos la mitad izquierda
        } 
        
        // 4. Si el elemento medio es mayor que el objetivo, 
        // el objetivo debe estar en la mitad izquierda.
        else {
            derecha = medio - 1; // Descartamos la mitad derecha
        }
    }

    // Si el bucle termina, el objetivo no fue encontrado
    return -1; 
}

int main() {
    // ⚠️ EL VECTOR DEBE ESTAR ORDENADO PARA QUE LA BÚSQUEDA BINARIA FUNCIONE ⚠️
    std::vector<int> numeros_ordenados = {5, 12, 23, 45, 60, 88, 100};
    int valor_a_buscar = 60;

    int indice_encontrado = busqueda_binaria(numeros_ordenados, valor_a_buscar);

    if (indice_encontrado != -1) {
        std::cout << "El valor " << valor_a_buscar 
                  << " fue encontrado en el índice: " << indice_encontrado 
                  << std::endl; // Output: 4
    } else {
        std::cout << "El valor " << valor_a_buscar 
                  << " no fue encontrado." << std::endl;
    }
    
    // Ejemplo de un valor no existente
    valor_a_buscar = 99;
    indice_encontrado = busqueda_binaria(numeros_ordenados, valor_a_buscar);
    std::cout << "El valor 99 fue encontrado en el índice: " << indice_encontrado << std::endl; // Output: -1

    return 0;
}