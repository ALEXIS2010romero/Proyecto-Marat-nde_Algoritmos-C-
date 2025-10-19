#include <iostream>
#include <vector>
#include <numeric>

// 1. Algoritmo Extendido de Euclides (Función Auxiliar)
// Calcula el MCD(a, b) y encuentra x, y tales que a*x + b*y = MCD(a, b)
long long algoritmo_euclides_extendido(long long a, long long b, long long &x, long long &y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    long long x1, y1;
    long long mcd = algoritmo_euclides_extendido(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return mcd;
}

// 2. Función para encontrar el Inverso Modular
// Devuelve el inverso modular de 'a' modulo 'm'. 
// Retorna -1 si el inverso no existe (si a y m no son coprimos).
long long inverso_modular(long long a, long long m) {
    long long x, y;
    long long mcd = algoritmo_euclides_extendido(a, m, x, y);
    if (mcd != 1) {
        return -1; // Inverso no existe
    }
    // Asegurarse de que el resultado sea positivo
    return (x % m + m) % m; 
}


// 3. Algoritmo principal del Teorema Chino del Resto (CRT)
// 'res' contiene pares {resto (a_i), modulo (m_i)}
long long teorema_chino_del_resto(const std::vector<std::pair<long long, long long>>& res) {
    long long M = 1; // Módulo total
    
    // Calcular el módulo total (M = m1 * m2 * ... * mk)
    for (const auto& par : res) {
        M *= par.second;
    }

    long long X = 0; // La solución
    
    // Aplicar la fórmula: X = Sum (a_i * M_i * inv(M_i) mod M)
    for (const auto& par : res) {
        long long a = par.first;   // Resto (a_i)
        long long m = par.second;  // Módulo (m_i)
        
        long long M_i = M / m; 
        
        // Calcular el inverso modular de M_i mod m
        long long inv_M_i = inverso_modular(M_i, m);
        
        // Sumar el término a la solución total X
        // El resultado debe ser (a_i * M_i * inv_M_i) mod M
        long long termino = (a * M_i) % M;
        termino = (termino * inv_M_i) % M;
        
        X = (X + termino) % M;
    }

    // X es la solución mínima positiva. La solución general es X + k*M.
    return X;
}

int main() {
    // Sistema de congruencias:
    // X = 2 (mod 3) -> a1=2, m1=3
    // X = 3 (mod 5) -> a2=3, m2=5
    // X = 2 (mod 7) -> a3=2, m3=7
    std::vector<std::pair<long long, long long>> congruencias = {
        {2, 3},
        {3, 5},
        {2, 7}
    };
    
    // Ejecución del algoritmo
    long long resultado_X = teorema_chino_del_resto(congruencias);
    
    // Mostrar el resultado
    std::cout << "El número X que satisface el sistema es: " << resultado_X << std::endl; 
    // M = 3*5*7 = 105. Solución esperada: X = 23.
    
    std::cout << "Verificación:" << std::endl;
    std::cout << "23 mod 3 = " << 23 % 3 << std::endl; // Output: 2
    std::cout << "23 mod 5 = " << 23 % 5 << std::endl; // Output: 3
    std::cout << "23 mod 7 = " << 23 % 7 << std::endl; // Output: 2

    return 0;
}