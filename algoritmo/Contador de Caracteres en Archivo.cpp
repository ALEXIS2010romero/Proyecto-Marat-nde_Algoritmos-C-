#include <iostream>
#include <fstream>
#include <string>

// Nombre del archivo a contar (DEBE EXISTIR en el mismo directorio)
const std::string NOMBRE_ARCHIVO = "datos.txt"; 

void contar_caracteres_archivo() {
    std::ifstream archivo(NOMBRE_ARCHIVO);
    long long contador = 0;
    char caracter;

    std::cout << "--- Contador de Caracteres en Archivo ---" << std::endl;

    if (!archivo.is_open()) {
        std::cerr << "[ERROR] No se pudo abrir el archivo '" << NOMBRE_ARCHIVO << "'. Asegúrate de que existe." << std::endl;
        return;
    }

    // Leer el archivo caracter por caracter
    while (archivo.get(caracter)) {
        contador++;
    }

    // Cerrar el archivo
    archivo.close();

    std::cout << "El archivo '" << NOMBRE_ARCHIVO << "' ha sido analizado." << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "Total de caracteres contados: " << contador << std::endl;
    std::cout << "(Incluye espacios y saltos de línea)" << std::endl;
    std::cout << "=====================================" << std::endl;
}

int main() {
    // NOTA: Para probar, crea un archivo llamado 'datos.txt' en el mismo directorio.
    // Contenido de ejemplo para datos.txt: "Hola\nMundo" (8 caracteres)
    contar_caracteres_archivo();
    return 0;
}