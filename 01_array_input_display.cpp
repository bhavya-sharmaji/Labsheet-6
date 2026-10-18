// 1. Input and display elements of a 1D array
#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    cout << "Enter number of elements (max 100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid size.";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
