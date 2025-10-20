#include <iostream>
#include <vector>
#include <cmath> // Para std::sqrt y std::pow
#include <numeric> // Para std::accumulate
#include <iomanip> // Para setprecision

void calcular_estadisticas(const std::vector<double>& datos) {
    if (datos.empty()) {
        std::cout << "No hay datos para calcular." << std::endl;
        return;
    }
    
    size_t n = datos.size();

    // 1. CÁLCULO DEL PROMEDIO (Media)
    // std::accumulate suma todos los elementos del vector
    double suma = std::accumulate(datos.begin(), datos.end(), 0.0);
    double promedio = suma / n;

    // 2. CÁLCULO DE LA DESVIACIÓN ESTÁNDAR
    double suma_cuadrados_diferencias = 0.0;
    for (double x : datos) {
        // (x - promedio)^2
        suma_cuadrados_diferencias += std::pow(x - promedio, 2);
    }

    // Varianza = suma_cuadrados_diferencias / n
    // Desviación estándar = raíz cuadrada de la varianza
    double desviacion_estandar = std::sqrt(suma_cuadrados_diferencias / n);

    std::cout << "\n--- Resultados Estadísticos ---" << std::endl;
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Promedio (Media): " << promedio << std::endl;
    std::cout << "Desviación Estándar: " << desviacion_estandar << std::endl;
}

int main() {
    std::vector<double> muestras = {2.0, 4.0, 4.0, 4.0, 5.0, 5.0, 7.0, 9.0};
    
    std::cout << "--- Calculadora de Desviación Estándar ---" << std::endl;
    std::cout << "Datos: ";
    for (double x : muestras) std::cout << x << " ";
    std::cout << std::endl;

    calcular_estadisticas(muestras);

    return 0;
}