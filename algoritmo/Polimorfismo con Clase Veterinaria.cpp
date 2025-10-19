#include <iostream>
#include <vector>
#include <memory> // Para std::unique_ptr

// Clase Base Abstracta
class Animal {
public:
    // Función virtual pura (hace la clase abstracta)
    virtual void hacer_sonido() const = 0;
    
    virtual ~Animal() {} // Destructor virtual
};

// Clase Derivada 1
class Perro : public Animal {
public:
    void hacer_sonido() const override {
        std::cout << "El perro dice: ¡Guau! ¡Guau!" << std::endl;
    }
};

// Clase Derivada 2
class Gato : public Animal {
public:
    void hacer_sonido() const override {
        std::cout << "El gato dice: ¡Miau! ¡Miau!" << std::endl;
    }
};

void simular_veterinaria() {
    std::cout << "--- Polimorfismo en Veterinaria ---" << std::endl;
    
    // Un vector de punteros a la clase base (Animal)
    // Usamos unique_ptr para una gestión de memoria segura
    std::vector<std::unique_ptr<Animal>> pacientes;

    pacientes.push_back(std::make_unique<Perro>());
    pacientes.push_back(std::make_unique<Gato>());
    pacientes.push_back(std::make_unique<Perro>());
    
    std::cout << "Veterinario pidiendo el sonido de cada animal:" << std::endl;

    // El bucle llama al método hacer_sonido()
    // El tipo de objeto real (Perro o Gato) determina qué función se ejecuta.
    for (const auto& animal : pacientes) {
        animal->hacer_sonido();
    }
}

int main() {
    simular_veterinaria();
    return 0;
}