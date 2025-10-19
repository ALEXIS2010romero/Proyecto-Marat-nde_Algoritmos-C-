#include <iostream>
#include <cstdlib>  
#include <ctime>    

int main() {

    srand(static_cast<unsigned int>(time(0)));

    int numeroSecreto = rand() % 100 + 1;
    int intentoUsuario; 
    int contadorIntentos = 0; 

    std::cout << "¡Bienvenido al juego Adivina el Numero!" << std::endl;
    std::cout << "Estoy pensando en un numero entre 1 y 100." << std::endl;
    std::cout << "Intenta adivinarlo." << std::endl;

 
    do {
 
        std::cout << "Ingresa tu intento: ";
        std::cin >> intentoUsuario;
        contadorIntentos++; 

        if (intentoUsuario > numeroSecreto) {
            std::cout << "Demasiado alto. ¡Intenta de nuevo!" << std::endl;
        } else if (intentoUsuario < numeroSecreto) {
            std::cout << "Demasiado bajo. ¡Intenta de nuevo!" << std::endl;
        }
    } while (intentoUsuario != numeroSecreto); 

    std::cout << "\n¡Felicidades! ¡Has adivinado el numero " << numeroSecreto << "!" << std::endl;
    std::cout << "Lo lograste en " << contadorIntentos << " intentos." << std::endl;

    return 0; 
}