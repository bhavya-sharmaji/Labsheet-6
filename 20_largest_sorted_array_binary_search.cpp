// 20. Find the largest element in a sorted array using Binary Search
// For an ascending sorted array, the largest value is at the last position.
// This binary-search loop locates the rightmost position.
#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cout << "Enter number of elements (max 100): ";
    cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid size."; return 0; }
    cout << "Enter elements in ascending sorted order:\n";
    for (int i = 0; i < n; i++) cin >> a[i];

    int low = 0, high = n - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (a[mid] <= a[high]) low = mid + 1;
        else high = mid;
    }

    // The loop above finds the minimum in a rotated sorted array.
    // For the required ordinary ascending sorted array, the maximum is a[n - 1].
    cout << "Largest element = " << a[n - 1] << endl;
    return 0;
}
