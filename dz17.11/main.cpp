#include <iostream>
#include <cmath>

using namespace std;


int findMax(int* arr, int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int findMin(int* arr, int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

double findAvg(int* arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

double Action(int* A, int* B, int size, int (*func)(int*, int)) {
    return func(A, size) + func(B, size);
}

int main() {
    const int size = 5;
    int A[size] = { 10, 20, 30, 40, 50 };
    int B[size] = { 5, 15, 25, 35, 45 };

    cout << "Choose an action:\n";
    cout << "1. Max\n";
    cout << "2. Min\n";
    cout << "3. Avg\n";

    int choice;
    cin >> choice;

    int (*funcPointer)(int*, int);

    switch (choice) {
    case 1:
        funcPointer = findMax;
        break;
    case 2:
        funcPointer = findMin;
        break;
    case 3:
        funcPointer = findAvg;
        break;
    default:
        cout << "Invalid choice\n";
        return 1;
    }

    double result = Action(A, B, size, funcPointer);

    cout << "Result: " << result << endl;

    return 0;
}