#include "../point.hpp"
#include <cassert>
#include <iostream>

int main() {
    Point p1(3, 4);
    Point p2(5, 6);
    Point p3(p1);

    // Testarea constructorului și operatorului de atribuire
    assert(p1.x == 3 && p1.y == 4);
    assert(p3 == p1);

    p2 = p1;
    assert(p2 == p1);

    // Testarea operatorului de egalitate
    assert(p1 == p3);
    assert(!(p1 == Point(0, 0)));

    // Testarea operatorilor de intrare/ieșire
    std::cout << "Introduceți două coordonate (exemplu: 7 8): ";
    std::cin >> p1;
    std::cout << "Punctul introdus este: " << p1 << std::endl;

    std::cout << "Toate testele pentru Point au trecut!" << std::endl;
    return 0;
}
