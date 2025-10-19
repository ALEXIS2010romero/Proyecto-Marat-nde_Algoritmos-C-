#include <iostream>
#include <string>
#include <cstdlib> // rand(), srand()
#include <ctime>   // time()

std::string generar_contrasena(int longitud) {
    // Caracteres posibles
    const std::string caracteres = 
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "0123456789"
        "!@#$%^&*()_+";
        
    std::string contrasena = "";
    int caracteres_size = caracteres.length();

    // Generar la contraseña caracter por caracter
    for (int i = 0; i < longitud; ++i) {
        // Selecciona un índice aleatorio dentro de la cadena 'caracteres'
        int indice_aleatorio = std::rand() % caracteres_size;
        contrasena += caracteres[indice_aleatorio];
    }

    return contrasena;
}

int main() {
    // Inicializa la semilla aleatoria una sola vez
    std::srand(std::time(0)); 
    
    const int LONGITUD = 12;
    
    std::cout << "--- Generador de Contraseñas Aleatorias ---" << std::endl;
    std::cout << "Longitud deseada: " << LONGITUD << " caracteres." << std::endl;
    
    std::string pass1 = generar_contrasena(LONGITUD);
    std::string pass2 = generar_contrasena(LONGITUD);
    
    std::cout << "\nContraseña 1: " << pass1 << std::endl;
    std::cout << "Contraseña 2: " << pass2 << std::endl;
    std::cout << "==========================================" << std::endl;

    return 0;
}