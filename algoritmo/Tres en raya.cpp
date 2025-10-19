#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <cstdlib>

using Board = std::vector<std::vector<char>>;

// Dibuja el tablero en la consola
void draw_board(const Board& board) {
    std::cout << "\n";
    std::cout << "  1   2   3" << std::endl;
    std::cout << "1 " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << std::endl;
    std::cout << "  --+---+--" << std::endl;
    std::cout << "2 " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << std::endl;
    std::cout << "  --+---+--" << std::endl;
    std::cout << "3 " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << std::endl;
    std::cout << "\n";
}

// Verifica si hay un ganador
bool check_win(const Board& board, char player) {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true; // Filas
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return true; // Columnas
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return true; // Diagonal \
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return true; // Diagonal /
    return false;
}

// Verifica si el tablero está lleno (empate)
bool check_tie(const Board& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') return false;
        }
    }
    return true;
}

// Obtiene la jugada del usuario y la valida
void get_move(Board& board, char player) {
    int row, col;
    while (true) {
        std::cout << "Turno del jugador " << player << ". Ingresa fila y columna (1-3): ";
        
        if (!(std::cin >> row >> col)) {
            std::cout << "Entrada inválida. Intenta con números." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (row >= 1 && row <= 3 && col >= 1 && col <= 3) {
            if (board[row - 1][col - 1] == ' ') {
                board[row - 1][col - 1] = player;
                break;
            } else {
                std::cout << "Esa celda ya está ocupada. Intenta de nuevo." << std::endl;
            }
        } else {
            std::cout << "Coordenadas fuera de rango. Usa números del 1 al 3." << std::endl;
        }
    }
}

// Función principal del juego
void play_tictactoe() {
    Board board(3, std::vector<char>(3, ' '));
    char current_player = 'X';
    bool game_over = false;

    std::cout << "--- Juego de Tres en Raya (Tic-Tac-Toe) ---" << std::endl;

    while (!game_over) {
        draw_board(board);
        get_move(board, current_player);

        if (check_win(board, current_player)) {
            draw_board(board);
            std::cout << "¡Felicidades! ¡El jugador " << current_player << " ha ganado!" << std::endl;
            game_over = true;
        } else if (check_tie(board)) {
            draw_board(board);
            std::cout << "¡Es un empate!" << std::endl;
            game_over = true;
        } else {
            // Cambiar de jugador
            current_player = (current_player == 'X' ? 'O' : 'X');
        }
    }
}

int main() {
    play_tictactoe();
    return 0;
}