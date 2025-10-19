#include <iostream>
#include <string>
#include <algorithm> // Para std::reverse

void convertir_a_binario() {
    int decimal;
    std::string binario = "";

    std::cout << "--- Conversor Decimal a Binario ---" << std::endl;
    std::cout << "Ingresa un número entero positivo: ";

    if (!(std::cin >> decimal) || decimal < 0) {
        std::cout << "[ERROR] Entrada inválida o negativa." << std::endl;
        return;
    }
    
    if (decimal == 0) {
        std::cout << "Binario: 0" << std::endl;
        return;
    }

    // Algoritmo de divisiones sucesivas por 2
    int temp = decimal;
    while (temp > 0) {
        // El residuo (0 o 1) es el bit
        int residuo = temp % 2; 
        binario += std::to_string(residuo);
        
        // Dividir el cociente entre 2 para la siguiente iteración
        temp /= 2;
    }

    // La cadena binaria se construyó al revés, así que hay que invertirla
    std::reverse(binario.begin(), binario.end());

    std::cout << "\n======================================" << std::endl;
    std::cout << "Decimal (" << decimal << ") es Binario: " << binario << std::endl;
    std::cout << "======================================" << std::endl;
}

int main() {
    convertir_a_binario();
    return 0;
}