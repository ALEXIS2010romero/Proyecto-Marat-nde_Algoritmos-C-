#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // Para formato de salida
#include <limits>  // Para limpiar el buffer

// Estructura para representar un Producto
struct Producto {
    int id;
    std::string nombre;
    int cantidad; // Stock en inventario
    double precio;
};

// Vector global para almacenar el inventario
std::vector<Producto> inventario;

// Función para inicializar algunos productos de ejemplo
void inicializar_inventario() {
    inventario.push_back({101, "Camiseta", 50, 15.99});
    inventario.push_back({102, "Pantalón", 30, 35.50});
    inventario.push_back({103, "Zapatos", 20, 65.00});
    inventario.push_back({104, "Calcetines", 100, 5.25});
}

// Función para mostrar el inventario completo
void mostrar_inventario() {
    std::cout << "\n==========================================================" << std::endl;
    std::cout << "               INVENTARIO ACTUAL DE LA TIENDA" << std::endl;
    std::cout << "==========================================================" << std::endl;
    std::cout << std::left << std::setw(5) << "ID"
              << std::setw(15) << "NOMBRE"
              << std::setw(10) << "STOCK"
              << std::setw(10) << "PRECIO" << std::endl;
    std::cout << "----------------------------------------------------------" << std::endl;

    for (const auto& prod : inventario) {
        std::cout << std::left << std::setw(5) << prod.id
                  << std::setw(15) << prod.nombre
                  << std::setw(10) << prod.cantidad
                  << std::setw(10) << std::fixed << std::setprecision(2) << prod.precio << std::endl;
    }
    std::cout << "==========================================================" << std::endl;
}

// Función para simular una venta
void realizar_venta() {
    int id_venta, cantidad_venta;
    
    std::cout << "\n--- REALIZAR VENTA ---" << std::endl;
    std::cout << "Ingresa el ID del producto a vender: ";
    if (!(std::cin >> id_venta)) { std::cout << "[ERROR] ID inválido." << std::endl; return; }
    
    std::cout << "Ingresa la cantidad a vender: ";
    if (!(std::cin >> cantidad_venta) || cantidad_venta <= 0) { std::cout << "[ERROR] Cantidad inválida." << std::endl; return; }

    // Buscar el producto por ID
    for (auto& prod : inventario) {
        if (prod.id == id_venta) {
            // Verificar stock
            if (prod.cantidad >= cantidad_venta) {
                // Realizar la venta
                prod.cantidad -= cantidad_venta;
                double total = cantidad_venta * prod.precio;
                
                std::cout << "\n[VENTA EXITOSA]" << std::endl;
                std::cout << "Se vendieron " << cantidad_venta << " unidades de " << prod.nombre << "." << std::endl;
                std::cout << "Total de la venta: $" << std::fixed << std::setprecision(2) << total << std::endl;
                std::cout << "Stock restante: " << prod.cantidad << std::endl;
            } else {
                std::cout << "[ERROR] Stock insuficiente. Solo quedan " << prod.cantidad << " unidades de " << prod.nombre << "." << std::endl;
            }
            return; // Salir de la función después de encontrar el producto
        }
    }
    
    std::cout << "[ERROR] Producto con ID " << id_venta << " no encontrado en el inventario." << std::endl;
}

// Función para agregar stock al inventario
void agregar_stock() {
    int id_compra, cantidad_compra;
    
    std::cout << "\n--- AGREGAR STOCK (COMPRA) ---" << std::endl;
    std::cout << "Ingresa el ID del producto para agregar stock: ";
    if (!(std::cin >> id_compra)) { std::cout << "[ERROR] ID inválido." << std::endl; return; }
    
    std::cout << "Ingresa la cantidad a agregar: ";
    if (!(std::cin >> cantidad_compra) || cantidad_compra <= 0) { std::cout << "[ERROR] Cantidad inválida." << std::endl; return; }

    // Buscar el producto por ID
    for (auto& prod : inventario) {
        if (prod.id == id_compra) {
            // Agregar stock
            prod.cantidad += cantidad_compra;
            
            std::cout << "\n[STOCK AGREGADO EXITOSAMENTE]" << std::endl;
            std::cout << "Se agregaron " << cantidad_compra << " unidades de " << prod.nombre << "." << std::endl;
            std::cout << "Nuevo stock total: " << prod.cantidad << std::endl;
            return;
        }
    }
    
    std::cout << "[ERROR] Producto con ID " << id_compra << " no encontrado." << std::endl;
}

// Función del menú principal
void menu_inventario() {
    int opcion;
    inicializar_inventario(); // Cargar datos iniciales

    do {
        std::cout << "\n\n--- MENU PRINCIPAL DE INVENTARIO ---" << std::endl;
        std::cout << "1. Mostrar Inventario" << std::endl;
        std::cout << "2. Realizar Venta (Reducir Stock)" << std::endl;
        std::cout << "3. Agregar Stock (Comprar)" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Opción: ";

        if (!(std::cin >> opcion)) {
            std::cout << "[ERROR] Entrada inválida. Saliendo." << std::endl;
            limpiar_entrada();
            break;
        }

        switch (opcion) {
            case 1:
                mostrar_inventario();
                break;
            case 2:
                realizar_venta();
                break;
            case 3:
                agregar_stock();
                break;
            case 4:
                std::cout << "Saliendo del sistema. ¡Adiós!" << std::endl;
                break;
            default:
                std::cout << "[ERROR] Opción no válida. Intenta de nuevo." << std::endl;
                break;
        }
    } while (opcion != 4);
}

int main() {
    menu_inventario();
    return 0;
}