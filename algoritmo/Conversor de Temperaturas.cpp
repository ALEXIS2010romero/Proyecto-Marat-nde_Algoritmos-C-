#include <iostream>
#include <iomanip> // Para setprecision

// Función: Celsius a Fahrenheit (F = C * 9/5 + 32)
double celsius_a_fahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32.0;
}

// Función: Fahrenheit a Celsius (C = (F - 32) * 5/9)
double fahrenheit_a_celsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    double temp_c = 25.0; // 25°C
    double temp_f = 68.0; // 68°F
    
    std::cout << "--- Conversor de Temperaturas ---" << std::endl;
    std::cout << std::fixed << std::setprecision(2); // Usar 2 decimales

    // Conversión 1: C -> F
    double resultado_f = celsius_a_fahrenheit(temp_c);
    std::cout << temp_c << " °C es igual a " << resultado_f << " °F" << std::endl;

    // Conversión 2: F -> C
    double resultado_c = fahrenheit_a_celsius(temp_f);
    std::cout << temp_f << " °F es igual a " << resultado_c << " °C" << std::endl;

    return 0;
}