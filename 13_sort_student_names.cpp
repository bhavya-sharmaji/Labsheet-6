// 13. Sort student names using Bubble Sort
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string names[100];
    cout << "Enter number of students (max 100): ";
    cin >> n;
    if (n < 1 || n > 100) { cout << "Invalid number."; return 0; }

    cout << "Enter each name (use underscores instead of spaces if needed):\n";
    for (int i = 0; i < n; i++) cin >> names[i];

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (names[j] > names[j + 1]) {
                string temp = names[j]; names[j] = names[j + 1]; names[j + 1] = temp;
            }

    cout << "Names in alphabetical order:\n";
    for (int i = 0; i < n; i++) cout << names[i] << endl;
    return 0;
}
