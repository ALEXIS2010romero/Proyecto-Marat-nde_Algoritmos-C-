#include <iostream>
#include <string>
#include <limits> // Para manejar la limpieza de entrada

// Credenciales de identidad fijas para la simulación
const std::string NOMBRE_CORRECTO = "Juan Perez";
const int PIN_CORRECTO = 2468;
const int INTENTOS_MAXIMOS = 3;

void logear_identidad() {
    std::string nombre_ingresado;
    int pin_ingresado;
    int intentos = 0;
    bool acceso_otorgado = false;

    std::cout << "--- Logeador de Identidad ---" << std::endl;
    std::cout << "Se requieren credenciales para verificar su identidad." << std::endl;

    while (intentos < INTENTOS_MAXIMOS && !acceso_otorgado) {
        std::cout << "\nIntento " << intentos + 1 << " de " << INTENTOS_MAXIMOS << std::endl;
        
        // 1. Solicitar Nombre (Puede ser una frase, usamos std::getline)
        std::cout << "Ingrese su Nombre completo: ";
        // std::ws descarta espacios o saltos de línea previos
        if (!(std::getline(std::cin >> std::ws, nombre_ingresado))) {
            std::cout << "[ERROR] Lectura de nombre fallida." << std::endl;
            break;
        }

        // 2. Solicitar PIN (número entero)
        std::cout << "Ingrese su PIN de 4 digitos: ";
        if (!(std::cin >> pin_ingresado)) {
            std::cout << "[ERROR] Entrada de PIN inválida. Debe ser un número." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            intentos++;
            continue; // Saltar al siguiente intento
        }

        // 3. Verificación de las Credenciales
        if (nombre_ingresado == NOMBRE_CORRECTO && pin_ingresado == PIN_CORRECTO) {
            acceso_otorgado = true;
            break; // Identidad verificada, salir del bucle
        } else {
            std::cout << "[FALLO] Identidad no verificada. Credenciales incorrectas." << std::endl;
            intentos++;
        }
    }

    // --- Resultado Final ---
    std::cout << "\n========================================" << std::endl;
    if (acceso_otorgado) {
        std::cout << "VERIFICACIÓN EXITOSA." << std::endl;
        std::cout << "¡Bienvenido, " << NOMBRE_CORRECTO << "! Su identidad ha sido confirmada." << std::endl;
    } else {
        std::cout << "ACCESO DENEGADO." << std::endl;
        std::cout << "Se ha agotado el número máximo de intentos." << std::endl;
    }
    std::cout << "========================================" << std::endl;
}

int main() {
    logear_identidad();
    return 0;
}