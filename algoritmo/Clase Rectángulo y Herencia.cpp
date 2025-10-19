#include <iostream>

// Clase Base
class Forma {
protected:
    std::string color;
public:
    Forma(std::string c) : color(c) {}
    
    virtual void mostrar_color() const {
        std::cout << "Esta forma es de color " << color << "." << std::endl;
    }
    
    // El destructor virtual es una buena práctica en herencia
    virtual ~Forma() {} 
};

// Clase Derivada (hereda de Forma)
class Rectangulo : public Forma {
private:
    double ancho;
    double alto;
public:
    Rectangulo(std::string c, double a, double h)
        // Llamada al constructor de la clase base
        : Forma(c), ancho(a), alto(h) {} 

    double calcular_area() const {
        return ancho * alto;
    }
    
    void mostrar_dimensiones() const {
        std::cout << "Rectángulo de " << ancho << "x" << alto << "." << std::endl;
        mostrar_color(); // Llama al método heredado
    }
};

int main() {
    std::cout << "--- Herencia: Clase Rectángulo ---" << std::endl;
    
    // Crear objeto Rectangulo
    Rectangulo r1("Azul", 5.0, 8.0);

    r1.mostrar_dimensiones();
    std::cout << "Área calculada: " << r1.calcular_area() << std::endl;

    return 0;
}