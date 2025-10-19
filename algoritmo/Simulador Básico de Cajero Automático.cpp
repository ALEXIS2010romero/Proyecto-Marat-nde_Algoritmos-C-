#include <iostream>
#include <limits> // Para manejar errores de entrada

double saldo = 1000.00; // Saldo inicial

// Función para limpiar la entrada inválida
void limpiar_entrada() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void consultar_saldo() {
    std::cout << "\n--- SALDO ACTUAL ---" << std::endl;
    std::cout << "Su saldo disponible es: $" << saldo << std::endl;
}

void depositar() {
    double monto;
    std::cout << "\n--- DEPOSITAR FONDOS ---" << std::endl;
    std::cout << "Ingrese el monto a depositar: $";
    if (!(std::cin >> monto) || monto <= 0) {
        std::cout << "[ERROR] Monto inválido. Debe ser un número positivo." << std::endl;
        limpiar_entrada();
        return;
    }
    saldo += monto;
    std::cout << "Depósito exitoso. Nuevo saldo: $" << saldo << std::endl;
}

void retirar() {
    double monto;
    std::cout << "\n--- RETIRAR FONDOS ---" << std::endl;
    std::cout << "Ingrese el monto a retirar: $";
    if (!(std::cin >> monto) || monto <= 0) {
        std::cout << "[ERROR] Monto inválido. Debe ser un número positivo." << std::endl;
        limpiar_entrada();
        return;
    }
    
    if (monto > saldo) {
        std::cout << "[ERROR] Fondos insuficientes. Solo tiene $" << saldo << std::endl;
    } else {
        saldo -= monto;
        std::cout << "Retiro exitoso. Nuevo saldo: $" << saldo << std::endl;
    }
}

int main() {
    int opcion;

    std::cout << "=== SIMULADOR DE CAJERO AUTOMÁTICO ===" << std::endl;
    do {
        std::cout << "\n1. Consultar Saldo" << std::endl;
        std::cout << "2. Depositar Fondos" << std::endl;
        std::cout << "3. Retirar Fondos" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Seleccione una opción: ";

        if (!(std::cin >> opcion)) {
            std::cout << "[ERROR] Entrada no numérica. Saliendo." << std::endl;
            limpiar_entrada();
            break;
        }

        switch (opcion) {
            case 1: consultar_saldo(); break;
            case 2: depositar(); break;
            case 3: retirar(); break;
            case 4: std::cout << "Gracias por usar el cajero. ¡Adiós!" << std::endl; break;
            default: std::cout << "[ERROR] Opción no válida." << std::endl;
        }
    } while (opcion != 4);
    
    return 0;
}