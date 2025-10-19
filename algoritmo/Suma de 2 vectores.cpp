#include <iostream>
#include <vector>
#include <stdexcept> // Para manejar errores de tamaño

// Función para imprimir un vector
void imprimir_vector(const std::vector<int>& vec, const std::string& nombre) {
    std::cout << nombre << " = [ ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << (i < vec.size() - 1 ? ", " : "");
    }
    std::cout << " ]" << std::endl;
}

void sumar_vectores() {
    // 1. Definición de los vectores de entrada
    std::vector<int> vector_A = {5, 8, 2, 12};
    std::vector<int> vector_B = {3, 1, 7, 4};

    // 2. Verificación de la condición (deben tener el mismo tamaño)
    if (vector_A.size() != vector_B.size()) {
        std::cerr << "[ERROR] Los vectores deben tener el mismo número de elementos para poder sumarse." << std::endl;
        return;
    }

    // 3. Inicialización del vector resultado
    size_t N = vector_A.size();
    std::vector<int> vector_C(N); // C tendrá el mismo tamaño que A y B

    // 4. Bucle principal para realizar la suma elemento por elemento
    for (size_t i = 0; i < N; ++i) {
        // C[i] = A[i] + B[i]
        vector_C[i] = vector_A[i] + vector_B[i];
    }

    // 5. Mostrar los resultados
    std::cout << "--- Suma de Dos Vectores ---" << std::endl;
    imprimir_vector(vector_A, "Vector A");
    std::cout << "     +" << std::endl;
    imprimir_vector(vector_B, "Vector B");
    std::cout << "-----------------------------------" << std::endl;
    imprimir_vector(vector_C, "Vector C (Suma)");
    std::cout << "===================================" << std::endl;
}

int main() {
    sumar_vectores();
    return 0;
}