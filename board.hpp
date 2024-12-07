#pragma once
#include <iostream>

/**
 * @file board.hpp
 * @brief Declarația clasei Board, ce reprezintă o tablă de joc.
 * 
 * @project Snake Game
 * @author 
 * @date 2024
 */

/**
 * @class Board
 * @brief Clasa ce modelează tabla de joc pentru șarpe.
 */
class Board {
    int _width;  ///< Lățimea tablei de joc.
    int _height; ///< Înălțimea tablei de joc.

public:
    /**
     * @brief Constructor implicit ce inițializează tabla cu dimensiuni predefinite.
     * @param width Lățimea tablei.
     * @param height Înălțimea tablei.
     */
    Board(int width = 20, int height = 20);

    /**
     * @brief Constructor de copiere.
     * @param other O altă tablă de joc.
     */
    Board(const Board& other);

    /**
     * @brief Obține lățimea tablei.
     * @return Lățimea tablei.
     */
    int GetWidth() const;

    /**
     * @brief Obține înălțimea tablei.
     * @return Înălțimea tablei.
     */
    int GetHeight() const;

    /**
     * @brief Operator de atribuire.
     * @param other Tablă de joc de copiat.
     * @return Referință la obiectul curent.
     */
    Board operator=(const Board& other);

    /**
     * @brief Comparație între două table.
     * @param other Cealaltă tablă de joc.
     * @return True dacă tablele au aceleași dimensiuni.
     */
    bool operator==(const Board& other) const;

    /**
     * @brief Citire dimensiuni tablă de la intrare.
     * @param in Streamul de intrare.
     * @param board Tablă de joc de populat.
     * @return Referință la streamul de intrare.
     */
    friend std::istream& operator>>(std::istream& in, Board& board);

    /**
     * @brief Scrie dimensiunile tablei în stream.
     * @param out Streamul de ieșire.
     * @param board Tablă de joc de scris.
     * @return Referință la streamul de ieșire.
     */
    friend std::ostream& operator<<(std::ostream& out, const Board& board);
};
