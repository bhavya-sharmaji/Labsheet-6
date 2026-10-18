// 15. Binary Search (array must be sorted in ascending order)
#include <iostream>
using namespace std;

int main() {
    int n, a[100], key;
    cout << "Enter number of elements (max 100): ";
    cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size."; return 0; }
    cout << "Enter sorted elements in ascending order:\n";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter value to search: ";
    cin >> key;

    int low = 0, high = n - 1, position = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == key) { position = mid + 1; break; }
        else if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    if (position != -1) cout << "Found at position " << position << endl;
    else cout << "Not found." << endl;
    return 0;
}
