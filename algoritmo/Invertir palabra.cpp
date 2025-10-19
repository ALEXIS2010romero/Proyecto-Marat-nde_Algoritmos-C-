#include <iostream>
#include <string>
#include <algorithm> // Para el método alternativo (std::reverse)
#include <limits>    // Para limpiar el buffer

void invertir_palabra() {
    std::string palabra_original;
    std::string palabra_invertida = "";

    std::cout << "--- Inversor de Palabras ---" << std::endl;
    std::cout << "Ingresa una palabra o frase: ";
    
    // Usar getline para leer la línea completa (en caso de que sea una frase)
    std::getline(std::cin >> std::ws, palabra_original); 
    
    if (palabra_original.empty()) {
        std::cout << "[ERROR] No se ingresó ninguna palabra." << std::endl;
        return;
    }

    // Método 1: Usando un bucle (algoritmo manual)
    // Itera desde el último carácter hasta el primero (índice 0)
    for (int i = palabra_original.length() - 1; i >= 0; --i) {
        palabra_invertida += palabra_original[i];
    }
    
    std::cout << "\n=====================================" << std::endl;
    std::cout << "Palabra original: " << palabra_original << std::endl;
    std::cout << "Palabra invertida (bucle): " << palabra_invertida << std::endl;
    std::cout << "=====================================" << std::endl;

    /*
    // Método 2 (Alternativo y más conciso en C++ moderno): 
    // Usando la función std::reverse de la librería <algorithm>
    std::string palabra_invertida_std = palabra_original;
    std::reverse(palabra_invertida_std.begin(), palabra_invertida_std.end());
    std::cout << "Palabra invertida (std::reverse): " << palabra_invertida_std << std::endl;
    */
}

int main() {
    // Asegurarse de que el buffer esté limpio antes de la primera lectura si es necesario
    std::cin.sync();
    
    invertir_palabra();
    return 0;
}