#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
#include <limits>

const int MAX_INTENTOS = 5;

// Selecciona una palabra aleatoria de la lista
std::string seleccionar_palabra() {
    std::vector<std::string> palabras = {"ordenador", "programa", "lenguaje", "teclado", "mouse", "monitor"};
    std::srand(std::time(0));
    int indice = std::rand() % palabras.size();
    return palabras[indice];
}

// Función principal del juego
void jugar_adivinar_palabra() {
    std::string palabra_secreta = seleccionar_palabra();
    std::string intento_usuario;
    int intentos_restantes = MAX_INTENTOS;
    bool adivinada = false;

    std::cout << "--- ¡Bienvenido a Adivinar la Palabra! ---" << std::endl;
    std::cout << "Tienes " << MAX_INTENTOS << " intentos para adivinar la palabra secreta." << std::endl;
    std::cout << "La palabra tiene " << palabra_secreta.length() << " letras." << std::endl;

    while (intentos_restantes > 0 && !adivinada) {
        std::cout << "\nIntentos restantes: " << intentos_restantes << std::endl;
        std::cout << "Ingresa tu palabra: ";
        
        // Leer la línea completa, ya que es una palabra
        std::cin >> intento_usuario;

        if (intento_usuario == palabra_secreta) {
            adivinada = true;
            break;
        } else {
            intentos_restantes--;
            
            if (intentos_restantes > 0) {
                std::cout << "Palabra incorrecta. ¡Sigue intentando!" << std::endl;
                
                // Pista adicional: comparar longitudes
                if (intento_usuario.length() < palabra_secreta.length()) {
                    std::cout << "Pista: La palabra secreta es más larga." << std::endl;
                } else if (intento_usuario.length() > palabra_secreta.length()) {
                    std::cout << "Pista: La palabra secreta es más corta." << std::endl;
                }
            }
        }
    }

    // --- Fin del Juego ---
    std::cout << "\n========================================" << std::endl;
    std::cout << "La palabra secreta era: " << palabra_secreta << std::endl;

    if (adivinada) {
        std::cout << "¡FELICIDADES! ¡Has ganado!" << std::endl;
    } else {
        std::cout << "¡Oh no! Te has quedado sin intentos. ¡Perdiste!" << std::endl;
    }
    std::cout << "========================================" << std::endl;
}

int main() {
    jugar_adivinar_palabra();
    return 0;
}