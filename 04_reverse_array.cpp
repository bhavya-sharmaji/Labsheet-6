// 4. Reverse a 1D array
#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    cout << "Enter number of elements (max 100): ";
    cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size."; return 0; }

    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
