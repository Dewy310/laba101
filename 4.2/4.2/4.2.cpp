#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Константа x
    const double x = 5.3;

    // Змінна k, яку вводить користувач
    double k;
    cout << "Введіть значення k: ";
    cin >> k;

    // Обчислення a = ln(|x|)
    double a = log(fabs(x));

    // Обчислення b = e^k + a
    double b = exp(k) + a;

    // Обчислення y = a^2 + b^2
    double y = pow(a, 2) + pow(b, 2);

    // Виведення результату
    cout << "Значення функції y = F(x) при x = " << x << " та k = " << k << " дорівнює " << y << endl;

    return 0;
}
