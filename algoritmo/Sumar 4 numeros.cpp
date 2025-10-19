#include <iostream>

int main() {
    // Declaramos las variables para los cuatro números y el resultado.
    double num1, num2, num3, num4, suma;

    std::cout << "--- Sumador de Cuatro Números ---\n";

    // 1. Pedir el primer número
    std::cout << "Ingresa el primer número: ";
    std::cin >> num1;

    // 2. Pedir el segundo número
    std::cout << "Ingresa el segundo número: ";
    std::cin >> num2;

    // 3. Pedir el tercer número
    std::cout << "Ingresa el tercer número: ";
    std::cin >> num3;

    // 4. Pedir el cuarto número
    std::cout << "Ingresa el cuarto número: ";
    std::cin >> num4;

    // 5. Realizar la suma
    suma = num1 + num2 + num3 + num4;

    // 6. Mostrar el resultado
    std::cout << "\nEl resultado de la suma de los cuatro números es: " << suma << std::endl;

    return 0; // Indica que el programa finalizó correctamente
}