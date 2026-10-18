// 17. Check if a value is present using Linear Search
#include <iostream>
using namespace std;

int main() {
    int n, a[100], key;
    cout << "Enter number of elements (max 100): ";
    cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size."; return 0; }
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter value to check: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < n; i++)
        if (a[i] == key) { found = true; break; }

    if (found) cout << "Number is present." << endl;
    else cout << "Number is not present." << endl;
    return 0;
}
