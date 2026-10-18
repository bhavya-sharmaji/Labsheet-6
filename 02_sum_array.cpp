// 2. Find the sum of all elements in a 1D array
#include <iostream>
using namespace std;

int main() {
    int n, arr[100], sum = 0;
    cout << "Enter number of elements (max 100): ";
    cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size."; return 0; }

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
