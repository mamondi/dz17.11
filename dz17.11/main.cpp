#include <iostream>
#include <Windows.h>

using namespace std;

double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double div(double a, double b);

int main() {
    system("chcp 1251");
    system("cls");

    double (*операції[4])(double, double) = { add, sub, mul, div };

    cout << "Введіть перше число: ";
    double num1;
    cin >> num1;

    cout << "Введіть друге число: ";
    double num2;
    cin >> num2;

    cout << "Виберіть операцію:\n";
    cout << "1. Додавання\n";
    cout << "2. Віднімання\n";
    cout << "3. Множення\n";
    cout << "4. Ділення\n";

    int choice;
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "Невірний вибір операції\n";
        return 1;
    }

    double result = операції[choice - 1](num1, num2);

    cout << "Результат: " << result << endl;

    return 0;
}

double add(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double mul(double a, double b) {
    return a * b;
}

double div(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        cout << "Помилка: Ділення на нуль\n";
        return 0.0;
    }
}