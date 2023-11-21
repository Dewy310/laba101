#include <iostream>
#include <cmath>

int main() {
    // Задані сторони трапеції
    double a, b, c, d;

    // Зчитуємо сторони з клавіатури
    std::cout << "Введіть довжину верхньої основи трапеції (a): ";
    std::cin >> a;

    std::cout << "Введіть довжину нижньої основи трапеції (b): ";
    std::cin >> b;

    std::cout << "Введіть довжину бічної сторони трапеції (c): ";
    std::cin >> c;

    std::cout << "Введіть довжину іншої бічної сторони трапеції (d): ";
    std::cin >> d;

    // Обчислюємо периметр трапеції
    double perimeter = a + b + c + d;

    // Обчислюємо площу трапеції
    double s = 0.5 * (a + b) * sqrt(c * c - pow(((b - a) * (b - a) + c * c - d * d) / (2 * (b - a)), 2));

    // Виводимо результати
    std::cout << "Периметр трапеції: " << perimeter << std::endl;
    std::cout << "Площа трапеції: " << s << std::endl;

    return 0;
}
