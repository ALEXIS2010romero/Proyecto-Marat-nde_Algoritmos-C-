#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
#include <algorithm>
#include <cctype>

const int MAX_FALLOS = 6;

// Dibuja el estado del ahorcado
void dibujar_ahorcado(int fallos) {
    std::cout << "  +---+" << std::endl;
    std::cout << "  |   |" << std::endl;
    std::cout << "  " << (fallos > 0 ? "O" : " ") << "   |" << std::endl;
    std::cout << " " << (fallos > 2 ? "/" : " ") << (fallos > 1 ? "|" : " ") << (fallos > 3 ? "\\" : " ") << "  |" << std::endl;
    std::cout << " " << (fallos > 4 ? "/" : " ") << " " << (fallos > 5 ? "\\" : " ") << "  |" << std::endl;
    std::cout << "      |" << std::endl;
    std::cout << "=========" << std::endl;
}

// Escoge una palabra aleatoria de la lista
std::string seleccionar_palabra() {
    std::vector<std::string> palabras = {"programacion", "computadora", "algoritmo", "desarrollo", "codigo", "interfaz"};
    std::srand(std::time(0));
    int indice = std::rand() % palabras.size();
    return palabras[indice];
}

// Inicializa la palabra oculta con guiones bajos
std::string inicializar_palabra_oculta(const std::string& palabra_secreta) {
    return std::string(palabra_secreta.length(), '_');
}

// Convierte a minúscula
char a_minuscula(char c) {
    return std::tolower(static_cast<unsigned char>(c));
}

// Función principal del juego
void jugar_ahorcado() {
    std::string palabra_secreta = seleccionar_palabra();
    std::string palabra_oculta = inicializar_palabra_oculta(palabra_secreta);
    std::string letras_usadas = "";
    int fallos = 0;
    char intento_letra;

    std::cout << "--- ¡Bienvenido al Juego del Ahorcado! ---" << std::endl;

    while (fallos < MAX_FALLOS && palabra_oculta != palabra_secreta) {
        dibujar_ahorcado(fallos);
        std::cout << "\nPalabra: " << palabra_oculta << std::endl;
        std::cout << "Fallos restantes: " << MAX_FALLOS - fallos << std::endl;
        std::cout << "Letras usadas: " << letras_usadas << std::endl;
        std::cout << "Ingresa una letra: ";
        std::cin >> intento_letra;

        intento_letra = a_minuscula(intento_letra);

        // Validar si la letra ya fue usada
        if (letras_usadas.find(intento_letra) != std::string::npos) {
            std::cout << "Ya usaste la letra '" << intento_letra << "'. Intenta con otra." << std::endl;
            continue;
        }

        letras_usadas += intento_letra;
        bool acierto = false;

        // Buscar y revelar la letra
        for (size_t i = 0; i < palabra_secreta.length(); ++i) {
            if (a_minuscula(palabra_secreta[i]) == intento_letra) {
                palabra_oculta[i] = palabra_secreta[i];
                acierto = true;
            }
        }

        if (acierto) {
            std::cout << "¡Acierto! La letra esta en la palabra." << std::endl;
        } else {
            fallos++;
            std::cout << "¡Fallo! La letra no está en la palabra." << std::endl;
        }
    }

    // --- Fin del Juego ---
    dibujar_ahorcado(fallos);
    std::cout << "\nLa palabra secreta era: " << palabra_secreta << std::endl;

    if (palabra_oculta == palabra_secreta) {
        std::cout << "\n¡Felicidades! ¡Has ganado!" << std::endl;
    } else {
        std::cout << "\n¡Ahorcado! Has perdido." << std::endl;
    }
}

// --------------------------------------------------

int main() {
    jugar_ahorcado();
    return 0;
}