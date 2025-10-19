#include <iostream>
#include <limits> // Para limpiar el buffer

// Función para calcular el perímetro del Triángulo (P = lado1 + lado2 + lado3)
void perimetro_triangulo() {
    double a, b, c;

    std::cout << "--- Calculadora de Perímetro de Triángulo ---" << std::endl;
    
    // Obtener y validar las longitudes de los lados
    std::cout << "Ingresa la longitud del lado 1 (a): ";
    if (!(std::cin >> a) || a <= 0) {
        std::cout << "[ERROR] Entrada inválida. El lado debe ser un número positivo." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    
    std::cout << "Ingresa la longitud del lado 2 (b): ";
    if (!(std::cin >> b) || b <= 0) {
        std::cout << "[ERROR] Entrada inválida. El lado debe ser un número positivo." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    
    std::cout << "Ingresa la longitud del lado 3 (c): ";
    if (!(std::cin >> c) || c <= 0) {
        std::cout << "[ERROR] Entrada inválida. El lado debe ser un número positivo." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    
    // 1. Aplicar la Desigualdad Triangular
    // Para que un triángulo exista, la suma de las longitudes de dos lados debe ser siempre mayor que la longitud del tercer lado.
    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "\n[ERROR] Las longitudes (" << a << ", " << b << ", " << c << ") no pueden formar un triángulo." << std::endl;
        return;
    }
    
    // 2. Calcular el Perímetro
    double perimetro = a + b + c;
    
    // 3. Mostrar el resultado
    std::cout << "\n=====================================" << std::endl;
    std::cout << "Fórmula: P = a + b + c" << std::endl;
    std::cout << "Cálculo: P = " << a << " + " << b << " + " << c << std::endl;
    std::cout << "El PERÍMETRO del triángulo es: " << perimetro << std::endl;
    std::cout << "=====================================" << std::endl;
}

int main() {
    perimetro_triangulo();
    return 0;
}