#include <iostream>
#include <iomanip>

// Constante para la tasa de cambio (¡DEBE SER ACTUALIZADA!)
// Ejemplo: 18.50 Pesos Mexicanos equivalen a 1 Dólar Americano
const double TASA_MXN_A_USD = 18.50; 

/**
 * @brief Convierte una cantidad de Pesos Mexicanos (MXN) a Dólares Americanos (USD).
 * @param pesos Cantidad en pesos mexicanos a convertir.
 * @param tasa Tasa de cambio (MXN por 1 USD).
 * @return La cantidad equivalente en dólares americanos.
 */
double convertir_pesos_a_dolares(double pesos, double tasa) {
    // La fórmula es: USD = MXN / Tasa de cambio
    return pesos / tasa;
}

int main() {
    double pesos;
    double dolares;

    // 1. Mostrar información y pedir la cantidad en pesos
    std::cout << "💰 Conversor MXN a USD 🇺🇸\n";
    std::cout << "===========================\n";
    std::cout << "Tasa de cambio actual (ejemplo): " << std::fixed << std::setprecision(2) << TASA_MXN_A_USD << " MXN por 1 $USD.\n";
    std::cout << "Ingresa la cantidad en pesos mexicanos ($MXN): ";
    
    // Leer la entrada del usuario y verificar que sea un número
    if (!(std::cin >> pesos)) {
        std::cerr << "Error: Ingreso no válido. Por favor, ingresa un número.\n";
        return 1; // Salir con código de error
    }

    // 2. Realizar la conversión usando la función
    dolares = convertir_pesos_a_dolares(pesos, TASA_MXN_A_USD);

    // 3. Mostrar el resultado
    std::cout << "\n---------------------------\n";
    std::cout << std::fixed << std::setprecision(2); // Formato con 2 decimales
    std::cout << pesos << " $MXN equivalen a " << dolares << " $USD.\n";
    std::cout << "---------------------------\n";

    return 0; // Finalizar el programa
}