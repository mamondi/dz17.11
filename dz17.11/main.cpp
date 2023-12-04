#include <iostream>

using namespace std;

void fillSums(int* A, int* B, int* C, int size) {
    for (int i = 0; i < size; ++i) {
        C[i] = A[i] + B[i];
    }
}

int main() {
    const int size = 5;

    int A[size] = { 1, 2, 3, 4, 5 };
    int B[size] = { 5, 4, 3, 2, 1 };
    int C[size];

    fillSums(A, B, C, size);

    cout << "Array A: ";
    for (int i = 0; i < size; ++i) {
        cout << A[i] << " ";
    }

    cout << "\nArray B: ";
    for (int i = 0; i < size; ++i) {
        cout << B[i] << " ";
    }

    cout << "\nArray C (sum of A and B): ";
    for (int i = 0; i < size; ++i) {
        cout << C[i] << " ";
    }

    return 0;
}