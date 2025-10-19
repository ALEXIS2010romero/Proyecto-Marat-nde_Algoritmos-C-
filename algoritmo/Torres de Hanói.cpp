#include <iostream>
#include <string>

// Función que implementa el algoritmo de Torres de Hanói (recursivo)
void torres_de_hanoi(int n, char origen, char destino, char auxiliar) {
    // Caso Base: Si solo queda 1 disco, muévelo y termina
    if (n == 1) {
        std::cout << "Mover disco 1 de " << origen << " a " << destino << std::endl;
        return;
    }

    // 1. Mover n-1 discos del Origen al Auxiliar, usando el Destino como auxiliar
    torres_de_hanoi(n - 1, origen, auxiliar, destino);

    // 2. Mover el disco más grande (el disco n) del Origen al Destino
    std::cout << "Mover disco " << n << " de " << origen << " a " << destino << std::endl;

    // 3. Mover n-1 discos del Auxiliar al Destino, usando el Origen como auxiliar
    torres_de_hanoi(n - 1, auxiliar, destino, origen);
}

int main() {
    int num_discos = 3; 

    std::cout << "--- Torres de Hanói con " << num_discos << " discos ---" << std::endl;
    
    // Ejecución del algoritmo
    // Varillas: O (Origen), D (Destino), A (Auxiliar)
    torres_de_hanoi(num_discos, 'O', 'D', 'A');
    
    // El número mínimo de movimientos es (2^N) - 1. Para N=3, son 7 movimientos.
    std::cout << "Número mínimo de movimientos: " << (1 << num_discos) - 1 << std::endl;

    return 0;
}