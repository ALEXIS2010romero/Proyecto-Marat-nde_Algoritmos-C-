#include <iostream>
#include <vector>
#include <list>
#include <string>

// Definición de la clase Tabla Hash
class TablaHash {
private:
    int BUCKETS; // Número de cubos (tamaño de la tabla)
    // El vector de listas enlazadas es el corazón del encadenamiento
    std::vector<std::list<int>> tabla; 

    // Función Hash: Mapea la clave a un índice de la tabla
    int funcion_hash(int clave) const {
        // Un simple módulo como función hash
        return clave % BUCKETS; 
    }

public:
    // Constructor
    TablaHash(int b) : BUCKETS(b) {
        tabla.resize(BUCKETS);
    }

    // Algoritmo de Inserción
    void insertar_clave(int clave) {
        int indice = funcion_hash(clave);
        // Insertar en la lista enlazada en el índice calculado
        tabla[indice].push_back(clave);
    }

    // Algoritmo de Búsqueda
    bool buscar_clave(int clave) const {
        int indice = funcion_hash(clave);
        
        // Iterar a través de la lista enlazada en el índice
        for (int elemento : tabla[indice]) {
            if (elemento == clave) {
                return true; // Encontrado
            }
        }
        return false; // No encontrado
    }

    // Algoritmo de Eliminación
    void eliminar_clave(int clave) {
        int indice = funcion_hash(clave);
        
        // Usar la función remove de la lista enlazada de C++
        tabla[indice].remove(clave);
    }
    
    // Función de visualización
    void mostrar_tabla() const {
        for (int i = 0; i < BUCKETS; ++i) {
            std::cout << "Bucket " << i << ": ";
            for (int clave : tabla[i]) {
                std::cout << clave << " -> ";
            }
            std::cout << "NULL" << std::endl;
        }
    }
};

int main() {
    // Crear una tabla hash con 7 cubos
    TablaHash mi_hash(7); 

    // Inserción de elementos (3 y 10 colisionan en 3 % 7 = 3)
    mi_hash.insertar_clave(50); // 50 % 7 = 1
    mi_hash.insertar_clave(700); // 700 % 7 = 0
    mi_hash.insertar_clave(3);   // 3 % 7 = 3 (Colisión 1)
    mi_hash.insertar_clave(10);  // 10 % 7 = 3 (Colisión 2)
    mi_hash.insertar_clave(25);  // 25 % 7 = 4

    std::cout << "--- Tabla Hash Inicial ---" << std::endl;
    mi_hash.mostrar_tabla();
    
    std::cout << "\n--- Búsqueda ---" << std::endl;
    int buscar = 10;
    std::cout << "Buscando " << buscar << ": " << (mi_hash.buscar_clave(buscar) ? "ENCONTRADO" : "NO ENCONTRADO") << std::endl;

    std::cout << "\n--- Eliminación ---" << std::endl;
    int eliminar = 700;
    mi_hash.eliminar_clave(eliminar);
    std::cout << "Clave " << eliminar << " eliminada." << std::endl;
    
    std::cout << "\n--- Tabla Hash Final ---" << std::endl;
    mi_hash.mostrar_tabla();

    return 0;
}