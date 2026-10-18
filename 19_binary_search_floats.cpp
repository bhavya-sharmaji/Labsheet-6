// 19. Binary Search for floating-point numbers (sorted ascending)
#include <iostream>
using namespace std;

int main() {
    int n;
    double a[100], key;
    cout << "Enter number of elements (max 100): ";
    cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size."; return 0; }
    cout << "Enter decimal numbers in ascending order:\n";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter decimal value to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    bool found = false;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == key) { found = true; break; }
        if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    cout << (found ? "Number found." : "Number not found.") << endl;
    return 0;
}
