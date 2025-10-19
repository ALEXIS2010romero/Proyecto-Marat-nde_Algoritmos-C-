#include <iostream>
#include <vector>
#include <algorithm> // Necesaria para std::reverse
#include <cstdlib>   // Para números aleatorios (solo para el ejemplo)
#include <ctime>     // Para inicializar la semilla

// Función para imprimir un vector
void imprimir_vector(const std::vector<int>& vec) {
    std::cout << "[ ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << (i < vec.size() - 1 ? ", " : "");
    }
    std::cout << " ]" << std::endl;
}

void invertir_vector() {
    // 1. Inicializar el vector original (ejemplo con números aleatorios)
    std::vector<int> datos_originales = {10, 20, 30, 40, 50};
    
    std::cout << "--- Inversor de Vector ---" << std::endl;
    std::cout << "Vector Original: ";
    imprimir_vector(datos_originales);

    // Creamos una copia para aplicar la inversión
    std::vector<int> datos_inversos = datos_originales;

    // ----------------------------------------------------
    // MÉTODO 1: Usando la función eficiente std::reverse
    // ----------------------------------------------------
    
    // std::reverse reordena los elementos en el rango dado [inicio, fin)
    std::reverse(datos_inversos.begin(), datos_inversos.end());

    std::cout << "\nVector Invertido (usando std::reverse): ";
    imprimir_vector(datos_inversos);


    // ----------------------------------------------------
    // MÉTODO 2: Algoritmo Manual (Invertir en otro vector)
    // ----------------------------------------------------
    std::vector<int> datos_manual;
    
    // Itera el vector original desde el último elemento (size - 1) hasta el primero (0)
    for (int i = datos_originales.size() - 1; i >= 0; --i) {
        datos_manual.push_back(datos_originales[i]);
    }
    
    std::cout << "Vector Invertido (usando bucle manual): ";
    imprimir_vector(datos_manual);
    std::cout << "======================================" << std::endl;
}

int main() {
    invertir_vector();
    return 0;
}