// 14. Search an element using Linear Search
#include <iostream>
using namespace std;

int main() {
    int n, a[100], key;
    cout << "Enter number of elements (max 100): ";
    cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size."; return 0; }
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter value to search: ";
    cin >> key;

    int position = -1;
    for (int i = 0; i < n; i++)
        if (a[i] == key) { position = i + 1; break; }

    if (position != -1) cout << "Found at position " << position << endl;
    else cout << "Not found." << endl;
    return 0;
}
