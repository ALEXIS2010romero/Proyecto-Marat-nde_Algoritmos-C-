#include <iostream>

// Uso de Template para hacer la clase genérica
template <typename T>
class Vector2D {
private:
    T x;
    T y;

public:
    // Constructor genérico
    Vector2D(T val_x, T val_y) : x(val_x), y(val_y) {}

    // Método para sumar dos vectores del mismo tipo
    Vector2D<T> sumar(const Vector2D<T>& otro) const {
        return Vector2D<T>(this->x + otro.x, this->y + otro.y);
    }

    // Método para mostrar el vector
    void mostrar() const {
        std::cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    std::cout << "--- Clase Vector Genérica (Templates) ---" << std::endl;

    // 1. Usar la clase con enteros (T = int)
    Vector2D<int> v_int1(5, 10);
    Vector2D<int> v_int2(3, 7);
    Vector2D<int> v_int_suma = v_int1.sumar(v_int2);

    std::cout << "\nVector de enteros:" << std::endl;
    v_int1.mostrar(); std::cout << " + "; v_int2.mostrar(); 
    std::cout << " = "; v_int_suma.mostrar(); std::cout << std::endl;

    // 2. Usar la clase con flotantes (T = double)
    Vector2D<double> v_double1(1.5, 2.7);
    Vector2D<double> v_double2(0.5, 1.3);
    Vector2D<double> v_double_suma = v_double1.sumar(v_double2);

    std::cout << "\nVector de flotantes:" << std::endl;
    v_double1.mostrar(); std::cout << " + "; v_double2.mostrar(); 
    std::cout << " = "; v_double_suma.mostrar(); std::cout << std::endl;

    return 0;
}