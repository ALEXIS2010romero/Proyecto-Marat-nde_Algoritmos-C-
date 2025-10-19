#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
#include <algorithm> // Para transform
#include <limits>  // Para numeric_limits

// Función para convertir un string a minúsculas
std::string to_lower(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

// Selecciona un color aleatorio de la lista
std::string seleccionar_color() {
    std::vector<std::string> colores = {"rojo", "verde", "azul", "amarillo", "naranja", "morado"};
    std::srand(std::time(0));
    int indice = std::rand() % colores.size();
    return colores[indice];
}

// Función principal del juego
void jugar_adivina_color() {
    std::string color_secreto = seleccionar_color();
    std::string intento_usuario;
    int intentos_restantes = 4; // Límite de 4 intentos
    bool adivinado = false;

    std::cout << "--- ¡Bienvenido a Adivinar el Color! ---" << std::endl;
    std::cout << "Tienes " << intentos_restantes << " intentos para adivinar mi color secreto." << std::endl;
    std::cout << "Los colores posibles son: rojo, verde, azul, amarillo, naranja, morado." << std::endl;
    
    // Convertir el color secreto a minúsculas para comparaciones
    color_secreto = to_lower(color_secreto);

    while (intentos_restantes > 0 && !adivinado) {
        std::cout << "\nIntentos restantes: " << intentos_restantes << std::endl;
        std::cout << "Ingresa tu color: ";
        
        if (!(std::cin >> intento_usuario)) {
            std::cout << "[ERROR] Entrada inválida." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        // Convertir el intento del usuario a minúsculas
        intento_usuario = to_lower(intento_usuario);

        if (intento_usuario == color_secreto) {
            adivinado = true;
            break;
        } else {
            intentos_restantes--;
            
            if (intentos_restantes > 0) {
                std::cout << "Incorrecto. Ese no es el color." << std::endl;
            }
        }
    }

    // --- Fin del Juego ---
    std::cout << "\n========================================" << std::endl;
    std::cout << "El color secreto era: " << color_secreto << std::endl;

    if (adivinado) {
        std::cout << "¡FELICIDADES! ¡Has adivinado el color!" << std::endl;
    } else {
        std::cout << "¡Perdiste! Se acabaron tus intentos." << std::endl;
    }
    std::cout << "========================================" << std::endl;
}

int main() {
    jugar_adivina_color();
    return 0;
}