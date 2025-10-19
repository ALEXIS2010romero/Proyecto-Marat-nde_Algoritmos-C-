#include <iostream>
#include <vector>
#include <algorithm> // Necesario para std::sort (opcional, pero buena práctica)

// Función que implementa el Algoritmo de Cambio de Monedas Voraz
std::map<int, int> cambio_de_monedas_voraz(int cantidad, const std::vector<int>& monedas) {
    
    // El mapa almacenará el resultado: {valor_moneda, cantidad_de_esa_moneda}
    std::map<int, int> resultado_cambio;
    int restante = cantidad;

    // 1. Usar una copia ordenada (de mayor a menor) de las monedas
    // Esto es crucial para la estrategia voraz.
    std::vector<int> monedas_ordenadas = monedas;
    std::sort(monedas_ordenadas.rbegin(), monedas_ordenadas.rend()); // Orden descendente

    std::cout << "Calculando cambio para: " << cantidad << std::endl;

    // 2. Iterar sobre las monedas de mayor a menor valor
    for (int moneda : monedas_ordenadas) {
        
        // Mientras la moneda actual se pueda usar para el restante
        while (restante >= moneda) {
            
            // a) Usar la moneda (la mejor opción local)
            restante -= moneda;
            
            // b) Registrar la moneda utilizada
            resultado_cambio[moneda]++;
        }
    }
    
    // Verificar si se pudo dar el cambio exacto
    if (restante > 0) {
        std::cout << "Advertencia: Faltó por dar " << restante << ". El cambio no fue exacto." << std::endl;
    }

    return resultado_cambio;
}

int main() {
    // Definición del sistema de monedas (ej. Dólar americano)
    std::vector<int> monedas = {1, 5, 10, 25}; // Pennies, Nickels, Dimes, Quarters
    int cantidad_a_cambiar = 67; // Cantidad de 67 centavos

    // Ejecución del algoritmo
    std::map<int, int> cambio = cambio_de_monedas_voraz(cantidad_a_cambiar, monedas);
    
    // Mostrar el resultado
    std::cout << "\nResultado (Moneda: Cantidad):" << std::endl;
    for (const auto& par : cambio) {
        std::cout << "  " << par.first << " centavos: " << par.second << " unidades" << std::endl;
    }
    // Output: 25: 2, 10: 1, 5: 1, 1: 2. (2*25 + 1*10 + 1*5 + 2*1 = 67)

    return 0;
}