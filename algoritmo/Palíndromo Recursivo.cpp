#include <iostream>
#include <string>
#include <algorithm> // Para std::tolower
#include <cctype>    // Para std::isalpha

// Preprocesa la cadena (quita espacios, convierte a minúsculas)
std::string limpiar_cadena(const std::string& s) {
    std::string limpia = "";
    for (char c : s) {
        if (std::isalpha(c)) { // Solo considera letras
            limpia += std::tolower(c);
        }
    }
    return limpia;
}

// Función recursiva que verifica si es palíndromo
bool es_palindromo_recursivo(const std::string& s) {
    // Caso base 1: Si la cadena tiene 0 o 1 carácter, es palíndromo
    if (s.length() <= 1) {
        return true;
    }

    // Caso base 2: Si el primer y último carácter no coinciden
    if (s.front() != s.back()) {
        return false;
    }

    // Paso recursivo: Llama a la función con la subcadena interna
    std::string subcadena = s.substr(1, s.length() - 2);
    return es_palindromo_recursivo(subcadena);
}

void verificar_palindromo() {
    std::string palabra = "Anita lava la tina";
    
    std::cout << "--- Palíndromo Recursivo ---" << std::endl;
    std::cout << "Frase a verificar: \"" << palabra << "\"" << std::endl;

    std::string limpia = limpiar_cadena(palabra);
    
    bool resultado = es_palindromo_recursivo(limpia);

    std::cout << "\nResultado: La frase " << (resultado ? "SÍ" : "NO") 
              << " es un palíndromo." << std::endl;
}

int main() {
    // Asegurar que std::cin no tenga basura
    std::cin.sync();
    verificar_palindromo();
    return 0;
}