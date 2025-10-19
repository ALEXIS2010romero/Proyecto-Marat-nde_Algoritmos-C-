#include <iostream>

int main() {
    // Declaramos las variables para los cinco números y el resultado.
    double num1, num2, num3, num4, num5, suma;

    std::cout << "--- Sumador de Cinco Números ---\n";

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
    
    // 5. Pedir el quinto número (¡Nuevo!)
    std::cout << "Ingresa el quinto número: ";
    std::cin >> num5;

    // 6. Realizar la suma
    suma = num1 + num2 + num3 + num4 + num5;

    // 7. Mostrar el resultado
    std::cout << "\nEl resultado de la suma de los cinco números es: " << suma << std::endl;

    return 0; // Indica que el programa finalizó correctamente
}