#pragma once
#include "point.hpp"
#include <vector>

/**
 * @file snake.hpp
 * @brief Declarația clasei Snake, ce reprezintă șarpele jocului.
 * 
 * @project Snake Game
 * @date 2024
 */

/**
 * @class Snake
 * @brief Clasa ce modelează comportamentul șarpelui.
 */
class Snake {
    std::vector<Point> segments; ///< Segmentele șarpelui (cap + corp).
    int length; ///< Lungimea curentă a șarpelui.

public:
    /**
     * @brief Constructor implicit. Inițializează șarpele.
     */
    Snake();

    /**
     * @brief Mișcă șarpele într-o anumită direcție.
     * @param direction Direcția de mișcare.
     */
    void Move(const Point& direction);

    /**
     * @brief Crește lungimea șarpelui.
     */
    void Grow();

    /**
     * @brief Obține poziția capului șarpelui.
     * @return Poziția punctului cap.
     */
    Point GetHeadPosition() const;
};
