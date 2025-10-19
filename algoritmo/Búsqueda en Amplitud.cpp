#include <iostream>
#include <vector>
#include <map>
#include <queue> // Necesario para la cola (Queue)
#include <set>   // Usado para llevar el registro de nodos visitados

// Definición de un grafo (mapa de listas de adyacencia)
using Grafo = std::map<int, std::vector<int>>;

// Función que implementa el algoritmo BFS
void busqueda_en_amplitud_bfs(const Grafo& g, int nodo_inicial) {
    
    if (g.find(nodo_inicial) == g.end()) {
        std::cout << "El nodo inicial no existe en el grafo." << std::endl;
        return;
    }

    // Conjunto para rastrear nodos ya visitados
    std::set<int> visitados;
    
    // Cola para almacenar los nodos a visitar (FIFO: First-In, First-Out)
    std::queue<int> cola; 

    // 1. Inicializar: Marcar el nodo inicial como visitado y encolarlo
    visitados.insert(nodo_inicial);
    cola.push(nodo_inicial);

    // 2. Procesar la cola hasta que esté vacía
    while (!cola.empty()) {
        
        // Obtener el nodo actual (frente de la cola) y desencolarlo
        int nodo_actual = cola.front();
        cola.pop();
        
        // Imprimir el nodo
        std::cout << nodo_actual << " ";

        // 3. Explorar los vecinos (nivel actual)
        // Recorrer los vecinos del nodo_actual
        if (g.count(nodo_actual)) {
            for (int vecino : g.at(nodo_actual)) {
                
                // Si el vecino no ha sido visitado:
                if (visitados.find(vecino) == visitados.end()) {
                    // a) Marcarlo como visitado
                    visitados.insert(vecino);
                    // b) Encolarlo para visitarlo después (manteniendo el orden de nivel)
                    cola.push(vecino);
                }
            }
        }
    }
}

int main() {
    // Grafo de ejemplo:
    // 1 -- 2 -- 4
    // |  /  \
    // 3     5
    Grafo mi_grafo = {
        {1, {2, 3}},
        {2, {1, 4, 5}},
        {3, {1}},
        {4, {2}},
        {5, {2}}
    };

    int nodo_inicial = 1;
    
    std::cout << "Recorrido BFS (Comenzando en el nodo " << nodo_inicial << "):" << std::endl;
    
    // Ejecución del algoritmo
    busqueda_en_amplitud_bfs(mi_grafo, nodo_inicial);
    
    std::cout << std::endl;
    // Output: 1 2 3 4 5 (Ordenado por niveles)

    return 0;
}