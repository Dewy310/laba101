#include <iostream>
#include <cmath>

using namespace std;

double formula_z1(double alpha) {
    // Формула z1 = cos(alpha) + sin(alpha) + cos(3*alpha) + sin(3*alpha)
    double z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);
    return z1;
}

double formula_z2(double alpha) {
    // Формула z2 = 2√2 * cos(alpha) * sin(π/4 + 2*alpha)
    double z2 = 2 * sqrt(2) * cos(alpha) * sin(3.14159265358979323846 / 4 + 2 * alpha);
    return z2;
}

int main() {
    // Приклад використання:
    double alpha_value;

    cout << "Введіть значення для кута alpha (в радіанах): ";
    cin >> alpha_value;

    // Обчислення та виведення результатів
    double result_z1 = formula_z1(alpha_value);
    double result_z2 = formula_z2(alpha_value);

    cout << "За формулою z1 отримано: " << result_z1 << endl;
    cout << "За формулою z2 отримано: " << result_z2 << endl;

    return 0;
}