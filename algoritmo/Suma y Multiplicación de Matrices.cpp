#include <iostream>
#include <vector>
#include <iomanip>

const int N = 3; // Dimensión de la matriz (N x N)

// Función para imprimir una matriz
void imprimir_matriz(const int matriz[N][N], const std::string& nombre) {
    std::cout << "\n" << nombre << ":" << std::endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << std::setw(5) << matriz[i][j];
        }
        std::cout << std::endl;
    }
}

void calcular_matrices() {
    // Definición de las matrices de ejemplo
    int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C_suma[N][N];
    int C_mult[N][N] = {0}; // Inicializar a cero para la multiplicación

    imprimir_matriz(A, "Matriz A");
    imprimir_matriz(B, "Matriz B");

    // --- SUMA DE MATRICES (Elemento por elemento) ---
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            C_suma[i][j] = A[i][j] + B[i][j];
        }
    }
    imprimir_matriz(C_suma, "Matriz C (Suma A + B)");

    // --- MULTIPLICACIÓN DE MATRICES (Fila por Columna) ---
    for (int i = 0; i < N; ++i) { // Fila de A
        for (int j = 0; j < N; ++j) { // Columna de B
            for (int k = 0; k < N; ++k) { // Iterador interno
                C_mult[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    imprimir_matriz(C_mult, "Matriz D (Multiplicación A x B)");
}

int main() {
    calcular_matrices();
    return 0;
}