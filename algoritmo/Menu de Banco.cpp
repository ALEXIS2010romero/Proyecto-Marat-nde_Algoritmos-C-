#include <iostream>
#include <limits> // Para numeric_limits
#include <iomanip> // Para setprecision

// Simulación de la clase BankAccount (necesaria para que el menú compile)
// En un programa real, esta clase estaría definida arriba o en un archivo de cabecera.
class BankAccount {
private:
    double balance;
    std::string owner_name;
public:
    BankAccount(std::string name, double initial_balance = 0.0) : owner_name(name), balance(initial_balance) {}
    void show_balance() const {
        std::cout << "\n[INFO] Saldo actual: $" << std::fixed << std::setprecision(2) << balance << std::endl;
    }
    void deposit(double amount) {
        if (amount > 0) { balance += amount; std::cout << "[ÉXITO] Depósito realizado." << std::endl; }
        else { std::cout << "[ERROR] Monto inválido." << std::endl; }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) { balance -= amount; std::cout << "[ÉXITO] Retiro realizado." << std::endl; }
        else if (amount > balance) { std::cout << "[ERROR] Fondos insuficientes." << std::endl; }
        else { std::cout << "[ERROR] Monto inválido." << std::endl; }
    }
};


void display_menu(const std::string& account_holder) {
    std::cout << "\n==============================================" << std::endl;
    std::cout << "  Bienvenido(a) al Banco C++, " << account_holder << std::endl;
    std::cout << "==============================================" << std::endl;
    std::cout << "1. Consultar Saldo" << std::endl;
    std::cout << "2. Realizar Depósito" << std::endl;
    std::cout << "3. Realizar Retiro" << std::endl;
    std::cout << "4. Salir del Sistema" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Seleccione una opción (1-4): ";
}

int main() {
    std::string name = "Usuario"; // Nombre predeterminado para el ejemplo
    double initial_balance = 1000.00;
    
    // Inicializar la cuenta bancaria con datos de ejemplo
    BankAccount my_account(name, initial_balance); 

    int choice;
    double amount;

    do {
        display_menu(name);

        // Intenta leer la opción del usuario
        if (!(std::cin >> choice)) {
            // Si la lectura falla (ej. ingresó una letra en lugar de un número)
            std::cin.clear(); // Limpiar la bandera de error
            // Ignorar el resto de la línea de entrada para evitar un bucle infinito
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            choice = 0; // Marcar como opción inválida
        }

        switch (choice) {
            case 1:
                my_account.show_balance();
                break;
            case 2:
                std::cout << "Ingrese el monto a depositar: $";
                std::cin >> amount;
                my_account.deposit(amount);
                break;
            case 3:
                std::cout << "Ingrese el monto a retirar: $";
                std::cin >> amount;
                my_account.withdraw(amount);
                break;
            case 4:
                std::cout << "\n¡Gracias por usar nuestro sistema, " << name << "! Vuelva pronto." << std::endl;
                break;
            default:
                std::cout << "\n[ERROR] Opción inválida. Por favor, ingrese un número entre 1 y 4." << std::endl;
                break;
        }
    } while (choice != 4);

    return 0;
}