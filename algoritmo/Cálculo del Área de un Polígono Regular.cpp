#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>

// Constante Pi
const double PI = 3.14159265358979323846;

// Función para calcular el área
double calcular_area_poligono(int num_lados, double longitud_lado) {
    if (num_lados < 3 || longitud_lado <= 0) {
        std::cerr << "[ERROR] Número de lados debe ser >= 3 y longitud positiva." << std::endl;
        return 0.0;
    }

    // Fórmula: Area = (N * L^2) / (4 * tan(PI/N))
    double L_cuadrado = std::pow(longitud_lado, 2);
    double tangente = std::tan(PI / num_lados); // tan() espera radianes
    
    double area = (num_lados * L_cuadrado) / (4.0 * tangente);
    return area;
}

void obtener_datos_poligono() {
    int N;
    double L;

    std::cout << "--- Calculadora de Área de Polígono Regular ---" << std::endl;
    std::cout << "Ingresa el número de lados (N) (ej: 6 para un hexágono): ";
    if (!(std::cin >> N)) return;

    std::cout << "Ingresa la longitud del lado (L): ";
    if (!(std::cin >> L)) return;
    
    double resultado = calcular_area_poligono(N, L);

    std::cout << "\n=====================================" << std::endl;
    std::cout << std::fixed << std::setprecision(4);
    if (resultado > 0) {
        std::cout << "El área del polígono de " << N << " lados es: " << resultado << std::endl;
    }
    std::cout << "=====================================" << std::endl;
}

int main() {
    obtener_datos_poligono();
    return 0;
}