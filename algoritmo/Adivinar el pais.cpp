#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
#include <algorithm> // Para transform
#include <limits>    // Para numeric_limits
#include <cctype>    // Para tolower

const int MAX_INTENTOS = 5;

// Función para convertir un string a minúsculas para una comparación sin distinción de mayúsculas
std::string to_lower(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), 
        [](unsigned char c){ return std::tolower(c); });
    return str;
}

// Selecciona un país aleatorio de la lista
std::string seleccionar_pais() {
    std::vector<std::string> paises = {"Mexico", "Colombia", "Argentina", "Espana", "Chile", "Peru", "Venezuela"};
    std::srand(std::time(0));
    int indice = std::rand() % paises.size();
    return paises[indice];
}

// Función principal del juego
void jugar_adivina_pais() {
    std::string pais_secreto_original = seleccionar_pais();
    std::string pais_secreto = to_lower(pais_secreto_original);
    std::string intento_usuario;
    int intentos_restantes = MAX_INTENTOS;
    bool adivinado = false;

    std::cout << "--- ¡Bienvenido a Adivinar el País! ---" << std::endl;
    std::cout << "Tienes " << MAX_INTENTOS << " intentos para adivinar un país de habla hispana." << std::endl;
    std::cout << "Pista: El país tiene " << pais_secreto.length() << " letras." << std::endl;

    while (intentos_restantes > 0 && !adivinado) {
        std::cout << "\nIntentos restantes: " << intentos_restantes << std::endl;
        std::cout << "Ingresa tu país: ";
        
        // Lee la entrada del usuario
        if (!(std::cin >> intento_usuario)) {
            std::cout << "[ERROR] Entrada inválida. Vuelve a intentarlo." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        // Normaliza el intento a minúsculas para la comparación
        std::string intento_normalizado = to_lower(intento_usuario);

        if (intento_normalizado == pais_secreto) {
            adivinado = true;
            break;
        } else {
            intentos_restantes--;
            
            if (intentos_restantes > 0) {
                std::cout << "Incorrecto. Ese no es el país." << std::endl;
                
                // Pista de longitud
                if (intento_normalizado.length() < pais_secreto.length()) {
                    std::cout << "Pista: La palabra secreta es más larga." << std::endl;
                } else if (intento_normalizado.length() > pais_secreto.length()) {
                    std::cout << "Pista: La palabra secreta es más corta." << std::endl;
                }
            }
        }
    }

    // --- Fin del Juego ---
    std::cout << "\n========================================" << std::endl;
    std::cout << "El país secreto era: " << pais_secreto_original << std::endl;

    if (adivinado) {
        std::cout << "¡FELICIDADES! ¡Has adivinado el país!" << std::endl;
    } else {
        std::cout << "¡Perdiste! Se acabaron tus intentos." << std::endl;
    }
    std::cout << "========================================" << std::endl;
}

int main() {
    jugar_adivina_pais();
    return 0;
}