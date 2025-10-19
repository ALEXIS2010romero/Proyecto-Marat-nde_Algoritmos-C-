#include <iostream>
#include <cmath>   // Para sqrt y pow
#include <string>

// Prototipo de la función principal de la calculadora
void scientific_calculator();

int main() {
    scientific_calculator();
    return 0;
}

void scientific_calculator() {
    double num1, num2, result;
    std::string op;

    std::cout << "--- Calculadora Científica Simple ---" << std::endl;
    std::cout << "Operaciones soportadas:" << std::endl;
    std::cout << "  Binarias: +, -, *, /" << std::endl;
    std::cout << "  Especiales: sqrt (raíz cuadrada), pow (potencia x^y)" << std::endl;
    std::cout << "  Para potencia, use 'pow' seguido de base y exponente." << std::endl;
    std::cout << "  Para raíz, use 'sqrt' seguido del número." << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    
    // Bucle principal para permitir múltiples cálculos
    while (true) {
        std::cout << "\nIngrese operación y número(s) (Ej: + 10 5, o sqrt 25): ";
        
        // Leer el operador como string
        if (!(std::cin >> op)) {
            break; // Terminar si la lectura falla
        }

        if (op == "salir" || op == "exit") {
            std::cout << "Saliendo de la calculadora. ¡Adiós!" << std::endl;
            break;
        }

        // --- Manejo de Operaciones Unarias (sqrt) ---
        if (op == "sqrt") {
            if (!(std::cin >> num1)) {
                std::cout << "Error: Falta el número para la raíz cuadrada." << std::endl;
                continue;
            }
            if (num1 >= 0) {
                result = std::sqrt(num1);
                std::cout << "Resultado: " << result << std::endl;
            } else {
                std::cout << "Error: No se puede calcular la raíz cuadrada de un número negativo." << std::endl;
            }
            continue;
        }

        // --- Manejo de Operaciones Binarias (incluyendo pow) ---
        if (!(std::cin >> num1 >> num2)) {
            std::cout << "Error: Faltan números para la operación binaria." << std::endl;
            continue;
        }

        if (op == "+") {
            result = num1 + num2;
        } else if (op == "-") {
            result = num1 - num2;
        } else if (op == "*") {
            result = num1 * num2;
        } else if (op == "/") {
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: División por cero." << std::endl;
                continue;
            }
        } else if (op == "pow") {
            // Calcula num1 elevado a la potencia de num2 (num1 ^ num2)
            result = std::pow(num1, num2);
        } else {
            std::cout << "Error: Operador '" << op << "' no reconocido." << std::endl;
            continue;
        }

        std::cout << "Resultado: " << result << std::endl;
    }
}