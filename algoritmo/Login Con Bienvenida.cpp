#include <iostream>
#include <string>
#include <limits>

// Define las credenciales fijas
const std::string USUARIO_CORRECTO = "admin";
const std::string CLAVE_CORRECTA = "1234";
const int INTENTOS_MAXIMOS = 3;

void simular_login() {
    std::string usuario_ingresado;
    std::string clave_ingresada;
    int intentos = 0;
    bool autenticado = false;

    std::cout << "--- Sistema de Login ---" << std::endl;

    while (intentos < INTENTOS_MAXIMOS && !autenticado) {
        std::cout << "\nIntento " << intentos + 1 << " de " << INTENTOS_MAXIMOS << std::endl;
        
        std::cout << "Usuario: ";
        // Usamos std::ws para descartar cualquier espacio en blanco o salto de línea previo
        if (!(std::getline(std::cin >> std::ws, usuario_ingresado))) return;

        std::cout << "Clave: ";
        if (!(std::getline(std::cin >> std::ws, clave_ingresada))) return;

        if (usuario_ingresado == USUARIO_CORRECTO && clave_ingresada == CLAVE_CORRECTA) {
            autenticado = true;
            break; // Salir del bucle
        } else {
            std::cout << "[ERROR] Usuario o clave incorrectos." << std::endl;
            intentos++;
        }
    }

    std::cout << "\n=====================================" << std::endl;
    if (autenticado) {
        // Mensaje de bienvenida personalizado
        std::cout << "¡BIENVENIDO/A, " << USUARIO_CORRECTO << "!" << std::endl;
        std::cout << "Has iniciado sesión con éxito." << std::endl;
    } else {
        std::cout << "[BLOQUEADO] Has agotado tus " << INTENTOS_MAXIMOS << " intentos. Acceso denegado." << std::endl;
    }
    std::cout << "=====================================" << std::endl;
}

int main() {
    simular_login();
    return 0;
}