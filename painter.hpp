#pragma once
#include "abstract_painter.hpp"
#include <string>
#include <vector>

/**
 * @file painter.hpp
 * @brief Implementarea operațiunilor grafice de bază.
 * 
 * @project Snake Game
 * @date 2024
 */

/**
 * @class Painter
 * @brief Clasă derivată pentru operațiuni concrete de desenare.
 */
class Painter : public AbstractPainter {
public:
    /**
     * @brief Desenează o imagine într-un dreptunghi definit de două puncte.
     * @param topLeft Punctul din stânga sus.
     * @param bottomRight Punctul din dreapta jos.
     * @param image Vector ce conține imaginea reprezentată ca text.
     */
    virtual void DrawImage(Point topLeft, Point bottomRight, std::vector<std::string>& image) override;

    /**
     * @brief Scrie text într-o anumită poziție.
     * @param position Punctul în care se afișează textul.
     * @param text Textul care trebuie scris.
     */
    virtual void WriteText(Point position, const std::string& text) override;
};
