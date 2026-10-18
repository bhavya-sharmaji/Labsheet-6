// 7. Input and display a 2D array (matrix)
#include <iostream>
using namespace std;

int main() {
    int rows, cols, a[10][10];
    cout << "Enter rows and columns (max 10 each): ";
    cin >> rows >> cols;
    if (rows < 1 || rows > 10 || cols < 1 || cols > 10) {
        cout << "Invalid matrix size."; return 0;
    }

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) cin >> a[i][j];

    cout << "Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
