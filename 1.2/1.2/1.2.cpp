#include <iostream>

int main() {
    // Задані дані
    double m1, m2, m3; // маса продуктів в кілограмах
    double priceButter = 8.50; // ціна масла в грн/кг
    double priceSourCream = 2.40; // ціна сметани в грн/кг
    double priceCream = 4.10; // ціна вершків в грн/кг

    // Введення мас продуктів
    std::cout << "Введіть масу масла (кг): ";
    std::cin >> m1;

    std::cout << "Введіть масу сметани (кг): ";
    std::cin >> m2;

    std::cout << "Введіть масу вершків (кг): ";
    std::cin >> m3;

    // Обчислення сум для купівлі окремих продуктів
    double totalButterCost = m1 * priceButter;
    double totalSourCreamCost = m2 * priceSourCream;
    double totalCreamCost = m3 * priceCream;

    // Обчислення загальної суми
    double totalCost = totalButterCost + totalSourCreamCost + totalCreamCost;

    // Виведення результатів
    std::cout << "Сума для купівлі масла: " << totalButterCost << " грн" << std::endl;
    std::cout << "Сума для купівлі сметани: " << totalSourCreamCost << " грн" << std::endl;
    std::cout << "Сума для купівлі вершків: " << totalCreamCost << " грн" << std::endl;
    std::cout << "Загальна сума для купівлі: " << totalCost << " грн" << std::endl;

    return 0;
}
