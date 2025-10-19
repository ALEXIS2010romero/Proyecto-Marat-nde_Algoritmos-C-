#include <iostream>
#include <vector>
#include <string>

class Pila {
private:
    std::vector<int> elementos;

public:
    // PUSH: Agrega un elemento a la cima de la pila
    void push(int valor) {
        elementos.push_back(valor);
        std::cout << "PUSH: Agregado " << valor << std::endl;
    }

    // POP: Elimina y devuelve el elemento de la cima de la pila
    int pop() {
        if (esta_vacia()) {
            std::cerr << "[ERROR] La pila está vacía. No se puede hacer POP." << std::endl;
            return -1; // Valor de error
        }
        int valor = elementos.back(); // Obtener el último elemento
        elementos.pop_back();        // Eliminar el último elemento
        return valor;
    }

    // TOP: Devuelve el elemento de la cima sin eliminarlo
    int top() const {
        if (esta_vacia()) {
            std::cerr << "[ERROR] La pila está vacía. No hay elemento TOP." << std::endl;
            return -1;
        }
        return elementos.back();
    }

    // Verifica si la pila no tiene elementos
    bool esta_vacia() const {
        return elementos.empty();
    }
    
    // Devuelve el tamaño actual de la pila
    size_t size() const {
        return elementos.size();
    }
};

int main() {
    std::cout << "--- Simulación de Pila (Stack - LIFO) ---" << std::endl;
    Pila mi_pila;

    mi_pila.push(10);
    mi_pila.push(20);
    mi_pila.push(30);

    std::cout << "\nTamaño actual: " << mi_pila.size() << std::endl;
    std::cout << "Elemento en la cima (TOP): " << mi_pila.top() << std::endl;

    std::cout << "\nPOP: Sacando el último elemento (LIFO): " << mi_pila.pop() << std::endl;
    std::cout << "POP: Sacando el siguiente elemento: " << mi_pila.pop() << std::endl;

    std::cout << "\n¿La pila está vacía? " << (mi_pila.esta_vacia() ? "Sí" : "No") << std::endl;

    mi_pila.pop(); // Sacar el último elemento (10)
    mi_pila.pop(); // Intentar sacar de una pila vacía (manejo de error)

    return 0;
}