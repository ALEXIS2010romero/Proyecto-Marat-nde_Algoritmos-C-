#include <iostream>
#include <stdexcept>

// Estructura para cada nodo de la lista enlazada
struct Nodo {
    int dato;
    Nodo* siguiente;
};

class PilaLista {
private:
    Nodo* cima; // Puntero al elemento superior de la pila

public:
    PilaLista() : cima(nullptr) {} // Constructor

    // PUSH: Agrega un nodo al inicio de la lista (cima)
    void push(int valor) {
        Nodo* nuevo_nodo = new Nodo;
        nuevo_nodo->dato = valor;
        nuevo_nodo->siguiente = cima; // El nuevo nodo apunta al antiguo cima
        cima = nuevo_nodo;            // El nuevo nodo se convierte en el nuevo cima
        std::cout << "PUSH: Agregado " << valor << std::endl;
    }

    // POP: Elimina el nodo de la cima
    int pop() {
        if (esta_vacia()) {
            throw std::runtime_error("[ERROR] La pila está vacía. No se puede hacer POP.");
        }
        Nodo* temp = cima;
        int valor = temp->dato;
        cima = cima->siguiente; // Mover la cima al siguiente nodo
        delete temp;            // Liberar la memoria del nodo que se saca
        return valor;
    }

    // Verifica si la pila está vacía
    bool esta_vacia() const {
        return cima == nullptr;
    }

    // Destructor (importante para liberar la memoria de la lista)
    ~PilaLista() {
        while (!esta_vacia()) {
            pop(); // Llama a pop hasta que la pila esté vacía
        }
    }
};

int main() {
    std::cout << "--- Pila con Lista Enlazada (Stack) ---" << std::endl;
    PilaLista mi_pila;

    mi_pila.push(100);
    mi_pila.push(200);
    mi_pila.push(300);

    try {
        std::cout << "\nPOP: Sacando: " << mi_pila.pop() << std::endl; // Sale 300
        std::cout << "POP: Sacando: " << mi_pila.pop() << std::endl; // Sale 200
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\nAl salir del programa, la memoria será liberada automáticamente por el destructor." << std::endl;
    
    return 0;
}