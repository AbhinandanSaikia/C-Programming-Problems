#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    // Input rows and columns for first matrix
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    // Input rows and columns for second matrix
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // Check if multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }

    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2] = {0};

    // Input first matrix
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Multiply the matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the resulting matrix
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
