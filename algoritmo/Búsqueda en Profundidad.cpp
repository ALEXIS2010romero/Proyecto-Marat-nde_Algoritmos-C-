#include <iostream>
#include <vector>
#include <map>
#include <set> // Usado para llevar el registro de nodos visitados

// Definición de un grafo como un mapa de listas de adyacencia
using Grafo = std::map<int, std::vector<int>>;

// Función que implementa el algoritmo DFS (recursivo)
void busqueda_en_profundidad_dfs(
    const Grafo& g, // El grafo
    int nodo_actual, // El nodo desde donde empezamos o estamos actualmente
    std::set<int>& visitados // Conjunto para rastrear nodos ya visitados
) {
    // 1. Marcar el nodo actual como visitado e imprimirlo
    visitados.insert(nodo_actual);
    std::cout << nodo_actual << " ";
    
    // 2. Iterar sobre todos los vecinos del nodo actual
    // La busqueda comienza a ir tan "profundo" como sea posible
    if (g.count(nodo_actual)) {
        for (int vecino : g.at(nodo_actual)) {
            
            // 3. Si el vecino no ha sido visitado, llamar a DFS recursivamente
            if (visitados.find(vecino) == visitados.end()) {
                busqueda_en_profundidad_dfs(g, vecino, visitados);
            }
        }
    }
}

int main() {
    // Grafo de ejemplo:
    // 1 -- 2 -- 4
    // |  /
    // 3
    Grafo mi_grafo = {
        {1, {2, 3}},
        {2, {1, 4}},
        {3, {1}},
        {4, {2}}
    };

    std::set<int> nodos_visitados;
    int nodo_inicial = 1;
    
    std::cout << "Recorrido DFS (Comenzando en el nodo " << nodo_inicial << "):" << std::endl;
    
    // Ejecución del algoritmo
    busqueda_en_profundidad_dfs(mi_grafo, nodo_inicial, nodos_visitados);
    
    std::cout << std::endl;
    // Un posible output: 1 2 4 3 (El orden exacto puede variar según el orden interno del map/vector, 
    // pero siempre irá a la mayor profundidad posible primero).

    return 0;
}