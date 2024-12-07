#include "../snake.hpp"
#include <cassert>
#include <iostream>

int main() {
    Snake snake;

    // Test inițializare
    assert(snake.GetHeadPosition() == Point(10, 10));

    // Test mișcare
    snake.Move(Point(1, 0));  // Mutare spre dreapta
    assert(snake.GetHeadPosition() == Point(11, 10));

    snake.Move(Point(0, 1));  // Mutare în jos
    assert(snake.GetHeadPosition() == Point(11, 11));

    // Test creștere
    snake.Grow();
    snake.Move(Point(-1, 0)); // Mutare spre stânga
    assert(snake.GetHeadPosition() == Point(10, 11));

    std::cout << "Toate testele pentru Snake au trecut!" << std::endl;
    return 0;
}
