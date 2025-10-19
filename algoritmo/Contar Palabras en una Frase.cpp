#include <iostream>
#include <string>
#include <sstream> // Necesaria para el conteo de palabras
#include <limits>  // Para manejar la entrada

void contar_palabras() {
    std::string frase;
    int contador_palabras = 0;

    std::cout << "--- Contador de Palabras en una Frase ---" << std::endl;
    std::cout << "Ingresa una frase (incluye espacios): " << std::endl;
    
    // Limpiar el buffer por si hay basura
    std::cin.sync(); 
    
    // Leer la línea completa, incluyendo espacios
    std::getline(std::cin, frase); 

    if (frase.empty()) {
        std::cout << "No se ingresó ninguna frase. Total de palabras: 0" << std::endl;
        return;
    }

    // Usar stringstream para tratar la frase como un flujo de entrada
    std::stringstream ss(frase);
    std::string palabra;

    // Extraer palabras del flujo hasta que no queden más
    while (ss >> palabra) {
        contador_palabras++;
    }

    std::cout << "\n==========================================" << std::endl;
    std::cout << "Frase ingresada: \"" << frase << "\"" << std::endl;
    std::cout << "Total de palabras contadas: " << contador_palabras << std::endl;
    std::cout << "==========================================" << std::endl;
}

int main() {
    contar_palabras();
    return 0;
}