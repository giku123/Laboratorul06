#pragma once
#include "point.hpp"
#include <string>
#include <vector>

/**
 * @file abstract_painter.hpp
 * @brief Declarația interfeței pentru operațiuni de desenare.
 * 
 * @project Snake Game
 * @author [Numele Autorului]
 * @date 2024
 */

/**
 * @class AbstractPainter
 * @brief Interfață abstractă pentru operațiuni grafice.
 */
struct AbstractPainter {
    /**
     * @brief Desenează o imagine într-un dreptunghi definit de două puncte.
     * @param topLeft Punctul din stânga sus.
     * @param bottomRight Punctul din dreapta jos.
     * @param image Vectorul ce conține imaginea reprezentată ca text.
     */
    virtual void DrawImage(Point topLeft, Point bottomRight, std::vector<std::string>& image) = 0;

    /**
     * @brief Afișează un text într-o anumită poziție.
     * @param position Punctul în care se va scrie textul.
     * @param text Textul care trebuie afișat.
     */
    virtual void WriteText(Point position, const std::string& text) = 0;
};
