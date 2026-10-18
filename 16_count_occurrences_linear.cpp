// 16. Count occurrences of a value using Linear Search
#include <iostream>
using namespace std;

int main() {
    int n, a[100], key, count = 0;
    cout << "Enter number of elements (max 100): ";
    cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size."; return 0; }
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter value to count: ";
    cin >> key;

    for (int i = 0; i < n; i++)
        if (a[i] == key) count++;

    cout << "Occurrences = " << count << endl;
    return 0;
}
