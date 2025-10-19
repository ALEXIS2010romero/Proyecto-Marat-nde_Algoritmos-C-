#include <iostream>

// Estructura de un nodo de Árbol Binario
struct Nodo {
    int clave;
    Nodo* izquierda;
    Nodo* derecha;

    Nodo(int valor) : clave(valor), izquierda(nullptr), derecha(nullptr) {}
};

// Función que implementa el algoritmo de Recorrido Inorden (recursivo)
void recorrido_inorden(Nodo* raiz) {
    // Caso base: Si la raíz es nula, simplemente retorna
    if (raiz == nullptr) {
        return;
    }

    // 1. Recorrer la rama izquierda
    recorrido_inorden(raiz->izquierda);

    // 2. Visitar la Raíz (imprimir el valor)
    std::cout << raiz->clave << " ";

    // 3. Recorrer la rama derecha
    recorrido_inorden(raiz->derecha);
}

int main() {
    // Construcción de un Árbol de Búsqueda Binaria (BST) de ejemplo:
    //      10
    //     /  \
    //    5    15
    //   / \  /
    //  3  7 12
    
    Nodo* raiz = new Nodo(10);
    raiz->izquierda = new Nodo(5);
    raiz->derecha = new Nodo(15);
    raiz->izquierda->izquierda = new Nodo(3);
    raiz->izquierda->derecha = new Nodo(7);
    raiz->derecha->izquierda = new Nodo(12);

    std::cout << "Recorrido Inorden del árbol (Izquierda - Raíz - Derecha):" << std::endl;

    // Ejecución del algoritmo
    recorrido_inorden(raiz);

    std::cout << std::endl; 
    // Output: 3 5 7 10 12 15 (¡La salida es ordenada!)

    // Limpieza de memoria (importante en C++)
    // (Simplificado aquí, se necesitaría una función de eliminación recursiva en un código real)
    delete raiz->derecha->izquierda;
    delete raiz->derecha;
    delete raiz->izquierda->derecha;
    delete raiz->izquierda->izquierda;
    delete raiz->izquierda;
    delete raiz;

    return 0;
}