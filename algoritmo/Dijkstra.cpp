#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <limits> // Para std::numeric_limits

// Par para almacenar la distancia y el nodo: {distancia, nodo}
using Pair = std::pair<int, int>; 
// Grafo: Nodo -> Lista de {vecino, peso}
using Grafo = std::map<int, std::vector<Pair>>; 

// Constante para representar el infinito
const int INF = std::numeric_limits<int>::max();

// Función que implementa el Algoritmo de Dijkstra
std::map<int, int> algoritmo_de_dijkstra(const Grafo& g, int origen) {
    // Mapa para almacenar las distancias más cortas desde el origen a cada nodo
    std::map<int, int> distancia;
    
    // Inicializar distancias a infinito
    for (const auto& par : g) {
        distancia[par.first] = INF;
    }
    
    // Cola de prioridad (Min-Heap) para seleccionar el nodo más cercano
    // std::greater<Pair> invierte el orden para que la menor distancia esté en la cima
    std::priority_queue<Pair, std::vector<Pair>, std::greater<Pair>> pq;

    // Distancia del origen a sí mismo es 0
    distancia[origen] = 0;
    pq.push({0, origen});

    while (!pq.empty()) {
        
        // Obtener el nodo 'u' con la distancia más corta actual
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        // Si ya encontramos un camino más corto a 'u', ignorar esta entrada antigua
        if (d > distancia[u]) {
            continue;
        }

        // Recorrer los vecinos del nodo 'u'
        if (g.count(u)) {
            for (const auto& par : g.at(u)) {
                int v = par.first;   // Vecino
                int peso = par.second; // Peso de la arista

                // Relajación: Si se encuentra un camino más corto a 'v' a través de 'u'
                if (distancia[u] + peso < distancia[v]) {
                    // Actualizar la distancia y añadir a la cola de prioridad
                    distancia[v] = distancia[u] + peso;
                    pq.push({distancia[v], v});
                }
            }
        }
    }

    return distancia;
}

int main() {
    // Grafo de ejemplo:
    // 1 --(4)--> 2 --(2)--> 3
    // |         / |
    // (8)    (1)  (7)
    // |      /    |
    // 4 <-- (5) -- 5
    Grafo mi_grafo = {
        {1, {{2, 4}, {4, 8}}},
        {2, {{3, 2}, {4, 1}, {5, 7}}},
        {3, {}}, // Nodo sumidero
        {4, {{5, 5}}},
        {5, {{3, 7}}}
    };

    int nodo_inicial = 1;
    
    std::cout << "Calculando el camino más corto desde el nodo " << nodo_inicial 
              << " (Algoritmo de Dijkstra):" << std::endl;
    
    // Ejecución del algoritmo
    std::map<int, int> distancias = algoritmo_de_dijkstra(mi_grafo, nodo_inicial);
    
    // Mostrar el resultado
    std::cout << "Distancias desde el nodo " << nodo_inicial << ":" << std::endl;
    for (const auto& par : distancias) {
        if (par.second != INF) {
            std::cout << "  Nodo " << par.first << ": " << par.second << std::endl;
        } else {
            std::cout << "  Nodo " << par.first << ": Inalcanzable" << std::endl;
        }
    }
    
    /* Output esperado:
      Nodo 1: 0
      Nodo 2: 4
      Nodo 3: 6 (1 -> 2 -> 3)
      Nodo 4: 5 (1 -> 2 -> 4)
      Nodo 5: 10 (1 -> 2 -> 4 -> 5)
    */

    return 0;
}