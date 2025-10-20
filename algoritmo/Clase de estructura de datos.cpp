#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

class Cola {
private:
    std::vector<int> elementos;

public:
    // ENQUEUE: Agrega un elemento al final de la cola
    void enqueue(int valor) {
        elementos.push_back(valor);
        std::cout << "ENQUEUE: Agregado " << valor << std::endl;
    }

    // DEQUEUE: Elimina y devuelve el elemento del frente de la cola (FIFO)
    int dequeue() {
        if (is_empty()) {
            throw std::runtime_error("[ERROR] La cola está vacía. No se puede hacer DEQUEUE.");
        }
        int valor = elementos.front(); // Obtener el primer elemento
        elementos.erase(elementos.begin()); // Eliminar el primer elemento
        return valor;
    }

    // FRONT: Devuelve el elemento del frente sin eliminarlo
    int front() const {
        if (is_empty()) {
             throw std::runtime_error("[ERROR] La cola está vacía. No hay elemento FRONT.");
        }
        return elementos.front();
    }

    // Verifica si la cola está vacía
    bool is_empty() const {
        return elementos.empty();
    }
};

int main() {
    std::cout << "--- Simulación de Cola (Queue - FIFO) ---" << std::endl;
    Cola mi_cola;

    mi_cola.enqueue(10); // Primero en entrar
    mi_cola.enqueue(20);
    mi_cola.enqueue(30); // Último en entrar

    std::cout << "\nElemento en el frente (FRONT): " << mi_cola.front() << std::endl;

    try {
        std::cout << "DEQUEUE: Sacando el primer elemento (FIFO): " << mi_cola.dequeue() << std::endl; // Sale 10
        std::cout << "DEQUEUE: Sacando el siguiente elemento: " << mi_cola.dequeue() << std::endl;    // Sale 20
        
        std::cout << "\n¿La cola está vacía? " << (mi_cola.is_empty() ? "Sí" : "No") << std::endl;
        
        std::cout << "DEQUEUE: Sacando el último elemento: " << mi_cola.dequeue() << std::endl;    // Sale 30
        std::cout << "DEQUEUE: Intentando sacar de una cola vacía: ";
        mi_cola.dequeue(); // Esto lanzará la excepción
        
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}