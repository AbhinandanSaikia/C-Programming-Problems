#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input rows and columns
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[rows][cols], transpose[cols][rows];

    // Input matrix elements
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Compute the transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix
    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
