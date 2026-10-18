// 6. Search an element in a 1D array without using functions
#include <iostream>
using namespace std;

int main() {
    int n, arr[100], key;
    cout << "Enter number of elements (max 100): ";
    cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size."; return 0; }

    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter element to search: ";
    cin >> key;

    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) break;
    }
    if (i < n) cout << "Element found at position " << i + 1 << endl;
    else cout << "Element not found." << endl;
    return 0;
}
