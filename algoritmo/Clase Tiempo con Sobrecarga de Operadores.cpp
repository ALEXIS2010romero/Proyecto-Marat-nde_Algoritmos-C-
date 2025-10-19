#include <iostream>

class Tiempo {
private:
    int horas;
    int minutos;
public:
    // Constructor
    Tiempo(int h = 0, int m = 0) {
        horas = h + m / 60; // Ajusta los minutos a horas
        minutos = m % 60;   // Minutos restantes
    }

    // Sobrecarga del operador + (Suma de dos objetos Tiempo)
    Tiempo operator+(const Tiempo& otro) const {
        int total_minutos = (this->horas * 60) + this->minutos;
        total_minutos += (otro.horas * 60) + otro.minutos;
        
        // El constructor se encargará de ajustar el resultado
        return Tiempo(0, total_minutos);
    }

    // Método para mostrar el tiempo
    void mostrar() const {
        std::cout << horas << "h " << minutos << "m";
    }
};

int main() {
    std::cout << "--- Sobrecarga de Operadores (Suma de Tiempo) ---" << std::endl;
    
    Tiempo t1(2, 45); // 2 horas y 45 minutos
    Tiempo t2(1, 30); // 1 hora y 30 minutos

    Tiempo t_resultado = t1 + t2; // Usa el operador sobrecargado

    std::cout << "Tiempo 1: "; t1.mostrar(); std::cout << std::endl;
    std::cout << "Tiempo 2: "; t2.mostrar(); std::cout << std::endl;
    std::cout << "Suma (t1 + t2): "; t_resultado.mostrar(); // Debería ser 4h 15m
    std::cout << std::endl;

    return 0;
}