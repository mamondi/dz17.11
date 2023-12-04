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

    double (*��������[4])(double, double) = { add, sub, mul, div };

    cout << "������ ����� �����: ";
    double num1;
    cin >> num1;

    cout << "������ ����� �����: ";
    double num2;
    cin >> num2;

    cout << "������� ��������:\n";
    cout << "1. ���������\n";
    cout << "2. ³�������\n";
    cout << "3. ��������\n";
    cout << "4. ĳ�����\n";

    int choice;
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "������� ���� ��������\n";
        return 1;
    }

    double result = ��������[choice - 1](num1, num2);

    cout << "���������: " << result << endl;

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
        cout << "�������: ĳ����� �� ����\n";
        return 0.0;
    }
}