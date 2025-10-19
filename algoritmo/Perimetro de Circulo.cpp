#include <iostream>
#include <cmath> // Para PI (aunque usaremos una constante definida)
#include <limits> // Para limpiar el buffer

// Definición de la constante PI para el círculo
const double PI = 3.14159265358979323846;

// Función para limpiar la entrada inválida
void limpiar_entrada() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Función para calcular el perímetro del Círculo (P = 2 * PI * radio)
void perimetro_circulo() {
    double radio;
    std::cout << "\n--- Perímetro del Círculo ---" << std::endl;
    std::cout << "Ingresa el radio: ";
    if (!(std::cin >> radio) || radio <= 0) {
        std::cout << "[ERROR] Entrada inválida. El radio debe ser un número positivo." << std::endl;
        limpiar_entrada();
        return;
    }
    double perimetro = 2 * PI * radio;
    std::cout << "El perímetro (circunferencia) es: " << perimetro << std::endl;
}

// Función para calcular el perímetro del Cuadrado (P = 4 * lado)
void perimetro_cuadrado() {
    double lado;
    std::cout << "\n--- Perímetro del Cuadrado ---" << std::endl;
    std::cout << "Ingresa la longitud de un lado: ";
    if (!(std::cin >> lado) || lado <= 0) {
        std::cout << "[ERROR] Entrada inválida. El lado debe ser un número positivo." << std::endl;
        limpiar_entrada();
        return;
    }
    double perimetro = 4 * lado;
    std::cout << "El perímetro es: " << perimetro << std::endl;
}

// Función para calcular el perímetro del Triángulo (P = lado1 + lado2 + lado3)
void perimetro_triangulo() {
    double a, b, c;
    std::cout << "\n--- Perímetro del Triángulo ---" << std::endl;
    std::cout << "Ingresa la longitud del lado 1: ";
    if (!(std::cin >> a) || a <= 0) {
        std::cout << "[ERROR] Entrada inválida. Los lados deben ser positivos." << std::endl;
        limpiar_entrada();
        return;
    }
    std::cout << "Ingresa la longitud del lado 2: ";
    if (!(std::cin >> b) || b <= 0) {
        std::cout << "[ERROR] Entrada inválida. Los lados deben ser positivos." << std::endl;
        limpiar_entrada();
        return;
    }
    std::cout << "Ingresa la longitud del lado 3: ";
    if (!(std::cin >> c) || c <= 0) {
        std::cout << "[ERROR] Entrada inválida. Los lados deben ser positivos." << std::endl;
        limpiar_entrada();
        return;
    }
    
    // Opcional: Validación de la desigualdad triangular (a+b > c, a+c > b, b+c > a)
    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "[ERROR] Esas longitudes no pueden formar un triángulo." << std::endl;
        return;
    }
    
    double perimetro = a + b + c;
    std::cout << "El perímetro es: " << perimetro << std::endl;
}

// Función principal con el menú
void calcular_perimetro() {
    int opcion;

    std::cout << "=== CALCULADORA DE PERÍMETROS ===" << std::endl;
    std::cout << "Selecciona la figura:" << std::endl;
    std::cout << "1. Círculo" << std::endl;
    std::cout << "2. Cuadrado" << std::endl;
    std::cout << "3. Triángulo" << std::endl;
    std::cout << "4. Salir" << std::endl;
    std::cout << "Opción: ";

    if (!(std::cin >> opcion)) {
        std::cout << "[ERROR] Entrada inválida." << std::endl;
        limpiar_entrada();
        return;
    }

    switch (opcion) {
        case 1:
            perimetro_circulo();
            break;
        case 2:
            perimetro_cuadrado();
            break;
        case 3:
            perimetro_triangulo();
            break;
        case 4:
            std::cout << "Saliendo del programa." << std::endl;
            break;
        default:
            std::cout << "[ERROR] Opción no válida. Intenta de nuevo." << std::endl;
            break;
    }
}

int main() {
    calcular_perimetro();
    return 0;
}