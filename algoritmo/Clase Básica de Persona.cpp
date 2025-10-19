#include <iostream>
#include <string>

class Persona {
private:
    std::string nombre;
    int edad;

public:
    // Constructor
    Persona(std::string n, int e) : nombre(n), edad(e) {}

    // Método de comportamiento
    void saludar() const {
        std::cout << "Hola, mi nombre es " << nombre 
                  << " y tengo " << edad << " años." << std::endl;
    }

    // Método para cambiar la edad
    void cumplir_anios() {
        edad++;
        std::cout << nombre << " acaba de cumplir " << edad << " años." << std::endl;
    }
};

int main() {
    std::cout << "--- Clase Persona (POO) ---" << std::endl;
    
    // Crear un objeto (instancia) de la clase Persona
    Persona p1("Ana Gomez", 28);
    Persona p2("Carlos Ruiz", 45);

    p1.saludar();
    p2.saludar();
    
    p1.cumplir_anios();
    p1.saludar();

    return 0;
}