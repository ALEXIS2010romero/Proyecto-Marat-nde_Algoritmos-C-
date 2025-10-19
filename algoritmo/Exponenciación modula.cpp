#include <iostream>

// 1. Definición de los Estados posibles
enum Estado {
    APAGADO,
    ENCENDIDO
};

// 2. Definición de los Eventos o Entradas
enum Evento {
    PRESIONAR_INTERRUPTOR
};

// Función principal que gestiona las transiciones de la FSM
Estado procesar_evento(Estado estado_actual, Evento evento) {
    
    Estado nuevo_estado = estado_actual; // Asumimos que el estado no cambiará

    // La lógica de la FSM: el nuevo estado depende del estado actual y el evento
    switch (estado_actual) {
        
        case APAGADO:
            // Si el estado actual es APAGADO...
            if (evento == PRESIONAR_INTERRUPTOR) {
                std::cout << "-> Transición: APAGADO a ENCENDIDO" << std::endl;
                nuevo_estado = ENCENDIDO;
            }
            break;

        case ENCENDIDO:
            // Si el estado actual es ENCENDIDO...
            if (evento == PRESIONAR_INTERRUPTOR) {
                std::cout << "-> Transición: ENCENDIDO a APAGADO" << std::endl;
                nuevo_estado = APAGADO;
            }
            break;
    }
    
    return nuevo_estado;
}

// Función auxiliar para imprimir el estado actual
void imprimir_estado(Estado estado) {
    if (estado == APAGADO) {
        std::cout << "Estado actual: La luz está APAGADA" << std::endl;
    } else {
        std::cout << "Estado actual: La luz está ENCENDIDA" << std::endl;
    }
}

int main() {
    // 3. Estado Inicial
    Estado estado_luz = APAGADO;
    
    imprimir_estado(estado_luz);

    // Simulación de eventos
    std::cout << "\n[Evento 1: Presionar interruptor]" << std::endl;
    estado_luz = procesar_evento(estado_luz, PRESIONAR_INTERRUPTOR);
    imprimir_estado(estado_luz); // Estado: ENCENDIDO

    std::cout << "\n[Evento 2: Presionar interruptor]" << std::endl;
    estado_luz = procesar_evento(estado_luz, PRESIONAR_INTERRUPTOR);
    imprimir_estado(estado_luz); // Estado: APAGADO

    return 0;
}