#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

// Define la estructura de una pregunta
struct Pregunta {
    std::string texto;
    std::vector<std::string> opciones;
    int respuesta_correcta; // Índice (0, 1, 2, 3) de la respuesta
};

// --- Banco de Preguntas ---
std::vector<Pregunta> cargar_banco_preguntas() {
    std::vector<Pregunta> banco;

    banco.push_back({
        "¿En qué año se disolvió la Unión Soviética (URSS)?",
        {"1979", "1989", "1991", "2001"},
        2 // 1991
    });

    banco.push_back({
        "¿Quién lideró el movimiento por los derechos civiles en EE. UU. con el discurso 'I Have a Dream'?",
        {"Malcolm X", "Rosa Parks", "Martin Luther King Jr.", "Nelson Mandela"},
        2 // Martin Luther King Jr.
    });

    banco.push_back({
        "¿Qué pintor español creó el movimiento artístico del Cubismo con Georges Braque?",
        {"Salvador Dalí", "Francisco de Goya", "Pablo Picasso", "Joan Miró"},
        2 // Pablo Picasso
    });
    
    banco.push_back({
        "¿Qué organismo internacional se fundó en 1945 para evitar conflictos mundiales?",
        {"OTAN", "Liga de las Naciones", "Cruz Roja", "ONU"},
        3 // ONU
    });
    
    banco.push_back({
        "¿Cuál es el principal motor o facilitador del fenómeno de la globalización?",
        {"Proteccionismo", "Tecnologías de la Información (TIC)", "Producción artesanal", "Disminución de viajes"},
        1 // Tecnologías de la Información (TIC)
    });

    return banco;
}

// Muestra una pregunta y procesa la respuesta del usuario
bool hacer_pregunta(const Pregunta& p, int numero_pregunta) {
    int eleccion;

    std::cout << "\n==========================================" << std::endl;
    std::cout << "PREGUNTA " << numero_pregunta << ": " << p.texto << std::endl;
    std::cout << "==========================================" << std::endl;

    for (size_t i = 0; i < p.opciones.size(); ++i) {
        std::cout << i + 1 << ". " << p.opciones[i] << std::endl;
    }
    
    std::cout << "Ingresa tu respuesta (1-" << p.opciones.size() << "): ";

    // Validación de entrada
    if (!(std::cin >> eleccion) || eleccion < 1 || eleccion > p.opciones.size()) {
        std::cout << "[ERROR] Entrada inválida. Intento fallido." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }

    // Comprueba la respuesta (el usuario ingresa 1-4, el índice es 0-3)
    if (eleccion - 1 == p.respuesta_correcta) {
        std::cout << "[CORRECTO] ¡Respuesta acertada!" << std::endl;
        return true;
    } else {
        std::cout << "[INCORRECTO] La respuesta correcta era: " << p.opciones[p.respuesta_correcta] << std::endl;
        return false;
    }
}

// Función principal del quiz
void iniciar_quiz() {
    std::vector<Pregunta> preguntas = cargar_banco_preguntas();
    int puntuacion = 0;

    std::cout << "========================================" << std::endl;
    std::cout << "  QUIZ DE CULTURA SOCIAL" << std::endl;
    std::cout << "========================================" << std::endl;
    
    // Opcional: Mezclar las preguntas para que el quiz sea diferente cada vez
    std::srand(std::time(0));
    std::random_shuffle(preguntas.begin(), preguntas.end());

    for (size_t i = 0; i < preguntas.size(); ++i) {
        if (hacer_pregunta(preguntas[i], i + 1)) {
            puntuacion++;
        }
    }

    // Muestra el resultado final
    std::cout << "\n\n--- FIN DEL QUIZ ---" << std::endl;
    std::cout << "Tu puntuación final es: " << puntuacion << " de " << preguntas.size() << std::endl;
    std::cout << "========================================" << std::endl;
}

// --------------------------------------------------

int main() {
    iniciar_quiz();
    return 0;
}