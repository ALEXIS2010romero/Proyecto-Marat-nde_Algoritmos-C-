#include <iostream>

int main() {
    // Declaramos las variables para los tres números y el resultado.
    // Usamos 'double' para permitir números con decimales.
    double num1, num2, num3, suma;

    std::cout << "--- Sumador de Tres Números ---\n";

    // 1. Pedir el primer número
    std::cout << "Ingresa el primer número: ";
    std::cin >> num1;

    // 2. Pedir el segundo número
    std::cout << "Ingresa el segundo número: ";
    std::cin >> num2;

    // 3. Pedir el tercer número
    std::cout << "Ingresa el tercer número: ";
    std::cin >> num3;

    // 4. Realizar la suma
    suma = num1 + num2 + num3;

    // 5. Mostrar el resultado
    std::cout << "\nEl resultado de sumar " << num1 << ", " << num2 << " y " << num3 << " es: " << suma << std::endl;

    return 0; // Indica que el programa finalizó correctamente
}