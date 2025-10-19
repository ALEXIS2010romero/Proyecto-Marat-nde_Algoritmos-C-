#include <iostream>
#include <vector>
#include <string>
#include <limits> // Para manejar errores de entrada

// Función para obtener un vector del usuario
std::vector<int> obtener_vector(const std::string& nombre, size_t size) {
    std::vector<int> vec(size);
    int valor;

    std::cout << "--- Ingresando " << nombre << " (" << size << " elementos) ---" << std::endl;
    for (size_t i = 0; i < size; ++i) {
        std::cout << "Ingresa el elemento " << i + 1 << ": ";
        
        // Validación de entrada
        if (!(std::cin >> valor)) {
            std::cerr << "[ERROR] Entrada inválida. Inicia el programa de nuevo." << std::endl;
            // Limpiar el estado de error y el buffer para evitar bucles infinitos
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            // Devolver un vector vacío o salir de la función, dependiendo de la lógica deseada
            return {}; 
        }
        vec[i] = valor;
    }
    return vec;
}

// Función para imprimir un vector en formato legible
void imprimir_vector(const std::vector<int>& vec, const std::string& nombre) {
    std::cout << nombre << " = [ ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << (i < vec.size() - 1 ? ", " : "");
    }
    std::cout << " ]" << std::endl;
}

void sumar_vectores_usuario() {
    size_t N;

    std::cout << "--- Suma de Dos Vectores Personalizada ---" << std::endl;
    std::cout << "Ingresa el número de elementos (tamaño de los vectores): ";

    // Obtener el tamaño y validar
    if (!(std::cin >> N) || N <= 0) {
        std::cerr << "[ERROR] Entrada inválida. El tamaño debe ser un entero positivo." << std::endl;
        return;
    }

    // 1. Obtener Vector A
    std::vector<int> vector_A = obtener_vector("Vector A", N);
    
    // Si la obtención falló (ej. error de entrada), salir.
    if (vector_A.empty() && N > 0) return;

    // 2. Obtener Vector B
    std::vector<int> vector_B = obtener_vector("Vector B", N);
    
    // Si la obtención falló, salir.
    if (vector_B.empty() && N > 0) return;
    
    // 3. Inicialización y Suma del vector resultante (C)
    std::vector<int> vector_C(N); 
    
    for (size_t i = 0; i < N; ++i) {
        vector_C[i] = vector_A[i] + vector_B[i];
    }

    // 4. Mostrar los resultados
    std::cout << "\n--- Resultado de la Suma ---" << std::endl;
    imprimir_vector(vector_A, "Vector A");
    std::cout << "     +" << std::endl;
    imprimir_vector(vector_B, "Vector B");
    std::cout << "-----------------------------------" << std::endl;
    imprimir_vector(vector_C, "Vector C (Suma)");
    std::cout << "===================================" << std::endl;
}

int main() {
    sumar_vectores_usuario();
    return 0;
}