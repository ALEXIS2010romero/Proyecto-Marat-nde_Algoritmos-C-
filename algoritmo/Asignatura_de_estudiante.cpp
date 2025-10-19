#include <iostream> // Incluye la biblioteca estándar de entrada y salida

int main() {
    double calificacion; // Variable para almacenar la calificación con decimales

    // Bucle do-while para asegurar que la calificación esté en el rango válido
    do {
        std::cout << "Ingrese la calificacion del estudiante (de 0 a 10): ";
        std::cin >> calificacion;

        if (calificacion < 0 || calificacion > 10) {
            std::cout << "Calificacion no valida. Por favor, ingrese un valor entre 0 y 10." << std::endl;
        }
    } while (calificacion < 0 || calificacion > 10);

    // Estructura condicional para determinar el estado del estudiante
    if (calificacion >= 7.0 && calificacion <= 10.0) {
        std::cout << "El estudiante APROBO la asignatura. ¡Felicidades! 🎉" << std::endl;
    } else if (calificacion >= 4.0 && calificacion < 7.0) {
        std::cout << "El estudiante se encuentra en SUPLETORIO. Esfuérzate para el siguiente examen. 📚" << std::endl;
    } else {
        std::cout << "El estudiante REPROBO la asignatura. A seguir intentando. 😔" << std::endl;
    }

    return 0; // Fin del programa
}
