#include <iostream>
using namespace std;

int main() {
    // ----------- Задача 1: Переведення радіан у градуси -----------
    double alpha;
    cout << "Введiть кут у радiанах (0 ≤ α < 2π): ";
    cin >> alpha;

    const double PI = 3.14;
    double degrees = alpha * 180 / PI;
    cout << "Кут у градусах = " << degrees << "°" << endl;

    // ----------- Задача 2: Переведення Фаренгейта у Цельсiй -----------
    double TF;
    cout << "\nВведiть температуру у градусах Фаренгейта: ";
    cin >> TF;

    double TC = (TF - 32) * 5.0 / 9.0;
    cout << "Температура у Цельсiях = " << TC << "°C" << endl;

    // ----------- Задача 3: Середнє арифметичне та сума квадратiв -----------
    double a, b, c;
    cout << "\nВведiть три дiйсних числа a, b, c: ";
    cin >> a >> b >> c;

    double M = (a + b + c) / 3.0;
    double Q = a * a + b * b + c * c;

    cout << "Середнє арифметичне M = " << M << endl;
    cout << "Сума квадратiв Q = " << Q << endl;

    return 0;
}
