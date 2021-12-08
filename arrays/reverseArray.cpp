#include <bits/stdc++.h>
using namespace std;

void reverseArray(int a[], int n, int index) {
    if (index >= n / 2) {
        return;
    }
    int temp = a[index];
    a[index] = a[n - 1 - index];
    a[n - 1 - index] = temp;
    reverseArray(a, n, index + 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        reverseArray(a, n, 0);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
        // cout << largestRecursive(a, n, 0) << endl;
    }
    return 0;
}
