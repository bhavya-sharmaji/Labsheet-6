// 11. Bubble Sort in ascending order
#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cout << "Enter number of elements (max 100): ";
    cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size."; return 0; }
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1]) {
                int temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp;
            }

    cout << "Ascending order: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}
