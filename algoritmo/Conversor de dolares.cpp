#include <iostream>
#include <iomanip> // Necesario para std::setprecision

int main() {
    // Definimos la tasa de cambio actual. 
    // ¡OJO! Este valor es un ejemplo y debe ser actualizado con la tasa del día.
    const double tasa_cambio = 18.50; // Ejemplo: 1 USD = 18.50 MXN
    
    double dolares;
    double pesos_mexicanos;

    // 1. Pedir al usuario la cantidad en dólares
    std::cout << "💰 Conversor USD a MXN 🇲🇽\n";
    std::cout << "===========================\n";
    std::cout << "Tasa de cambio actual (ejemplo): 1 USD = " << std::fixed << std::setprecision(2) << tasa_cambio << " MXN\n";
    std::cout << "Ingresa la cantidad en dólares americanos ($USD): ";
    
    // Leer la entrada del usuario
    if (!(std::cin >> dolares)) {
        std::cerr << "Error: Ingreso no válido. Por favor, ingresa un número.\n";
        return 1; // Salir con código de error
    }

    // 2. Realizar la conversión
    // La fórmula es: Cantidad en MXN = Cantidad en USD * Tasa de cambio
    pesos_mexicanos = dolares * tasa_cambio;

    // 3. Mostrar el resultado
    std::cout << "\n---------------------------\n";
    std::cout << std::fixed << std::setprecision(2); // Para mostrar 2 decimales (formato de moneda)
    std::cout << dolares << " $USD equivalen a " << pesos_mexicanos << " $MXN.\n";
    std::cout << "---------------------------\n";

    return 0; // Finalizar el programa exitosamente
}