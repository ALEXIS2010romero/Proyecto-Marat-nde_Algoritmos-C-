#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
#include <map>     // Para almacenar las frecuencias

void simular_dado() {
    // Inicializa el generador de números aleatorios
    std::srand(std::time(0)); 
    
    const int CARAS_DADO = 6;
    const int LANZAMIENTOS = 10;
    
    // Mapa para almacenar la frecuencia de cada número (cara -> contador)
    std::map<int, int> frecuencias;
    
    std::cout << "--- Simulación de Lanzamiento de Dado ---" << std::endl;
    std::cout << "Lanzando un dado de " << CARAS_DADO << " caras " << LANZAMIENTOS << " veces:" << std::endl;
    std::cout << "Resultados: ";

    for (int i = 0; i < LANZAMIENTOS; ++i) {
        // Genera un número aleatorio entre 1 y 6
        int resultado = (std::rand() % CARAS_DADO) + 1;
        
        std::cout << resultado << (i < LANZAMIENTOS - 1 ? ", " : "");
        
        // Contar la frecuencia
        frecuencias[resultado]++;
    }
    std::cout << "\n\n--- Frecuencia de Resultados ---" << std::endl;
    
    // Imprimir las frecuencias
    for (int i = 1; i <= CARAS_DADO; ++i) {
        // Usa .count() para saber si la clave existe, aunque el mapa lo crea con 0 si no existe
        int cuenta = frecuencias.count(i) ? frecuencias[i] : 0;
        std::cout << "Cara " << i << ": " << cuenta << " veces" << std::endl;
    }
}

int main() {
    simular_dado();
    return 0;
}