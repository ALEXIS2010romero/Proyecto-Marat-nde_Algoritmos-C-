#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
#include <string>

// Enumera las opciones para una mejor legibilidad del código
enum Opcion { PIEDRA = 1, PAPEL = 2, TIJERA = 3 };

// Convierte un número de opción (1-3) a su nombre en texto
std::string get_opcion_nombre(Opcion opcion) {
    switch (opcion) {
        case PIEDRA: return "Piedra";
        case PAPEL:  return "Papel";
        case TIJERA: return "Tijera";
        default:     return "Desconocida";
    }
}

// Determina el ganador de la ronda
std::string determinar_ganador(Opcion jugador, Opcion computadora) {
    if (jugador == computadora) {
        return "Empate";
    }
    
    // Lógica del juego: (Piedra > Tijera), (Papel > Piedra), (Tijera > Papel)
    if ((jugador == PIEDRA && computadora == TIJERA) ||
        (jugador == PAPEL && computadora == PIEDRA) ||
        (jugador == TIJERA && computadora == PAPEL)) {
        return "¡Ganaste!";
    } else {
        return "¡Perdiste!";
    }
}

// Función principal del juego
void jugar_ppt() {
    // Inicializa la semilla para generar números aleatorios
    std::srand(std::time(0));
    int eleccion_jugador_int;
    
    std::cout << "--- Piedra, Papel o Tijera ---" << std::endl;

    while (true) {
        std::cout << "\nElige tu jugada:" << std::endl;
        std::cout << "1. Piedra" << std::endl;
        std::cout << "2. Papel" << std::endl;
        std::cout << "3. Tijera" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Tu elección (1-4): ";

        if (!(std::cin >> eleccion_jugador_int)) {
            std::cout << "[ERROR] Entrada inválida. Vuelve a intentarlo." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (eleccion_jugador_int == 4) {
            std::cout << "\n¡Gracias por jugar! Adiós." << std::endl;
            break;
        }

        if (eleccion_jugador_int < 1 || eleccion_jugador_int > 3) {
            std::cout << "[ERROR] Opción no válida. Ingresa un número entre 1 y 4." << std::endl;
            continue;
        }

        Opcion jugador = static_cast<Opcion>(eleccion_jugador_int);
        
        // La computadora elige un número aleatorio entre 1 y 3
        int eleccion_comp_int = std::rand() % 3 + 1; 
        Opcion computadora = static_cast<Opcion>(eleccion_comp_int);

        std::cout << "\nTu elegiste: " << get_opcion_nombre(jugador) << std::endl;
        std::cout << "La computadora eligió: " << get_opcion_nombre(computadora) << std::endl;

        std::string resultado = determinar_ganador(jugador, computadora);
        std::cout << "Resultado: " << resultado << std::endl;
    }
}

int main() {
    jugar_ppt();
    return 0;
}