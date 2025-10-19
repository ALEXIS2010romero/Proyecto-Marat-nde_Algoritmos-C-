#include <iostream>
#include <cmath> // Para std::abs

// Algoritmo de Euclides: MCD(a, b) = MCD(b, a mod b)
int calcular_mcd_euclides(int a, int b) {
    // Asegurarse de que los números sean positivos
    a = std::abs(a);
    b = std::abs(b);

    // Bucle basado en el residuo
    while (b != 0) {
        int residuo = a % b;
        a = b;
        b = residuo;
    }
    // Cuando b es 0, a contiene el MCD
    return a;
}

int main() {
    int num1 = 48;
    int num2 = 18;
    
    std::cout << "--- Algoritmo de Euclides (MCD) ---" << std::endl;
    std::cout << "Buscando el Máximo Común Divisor (MCD) de " << num1 << " y " << num2 << "." << std::endl;

    int mcd = calcular_mcd_euclides(num1, num2);
    
    std::cout << "\nEl MCD de (" << num1 << ", " << num2 << ") es: " << mcd << std::endl;
    // Comprobación: 48 = 2*2*2*2*3; 18 = 2*3*3. MCD es 2*3 = 6
    
    return 0;
}