#include "../board.hpp"
#include <cassert>
#include <iostream>

int main() {
    Board b1(10, 15);
    Board b2(20, 25);
    Board b3(b1);

    // Testarea constructorilor
    assert(b1.GetWidth() == 10);
    assert(b1.GetHeight() == 15);
    assert(b3 == b1);

    // Testarea operatorului de atribuire
    b2 = b1;
    assert(b2 == b1);

    // Testarea operatorilor de intrare/ieșire
    std::cout << "Introduceți dimensiunile tablei (exemplu: 30 40): ";
    std::cin >> b1;
    std::cout << "Dimensiunile introduse sunt: " << b1 << std::endl;

    std::cout << "Toate testele pentru Board au trecut!" << std::endl;
    return 0;
}
