#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int** matrix_A = new int* [n];
    int** matrix_B = new int* [n];
    int** matrix = new int* [n];

    for (int i = 0; i < n; i++) {
        matrix_A[i] = new int[m];
        matrix_B[i] = new int[m];
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> matrix_A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix_B[i][j];
            matrix[i][j] = matrix_A[i][j] + matrix_B[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

    
}