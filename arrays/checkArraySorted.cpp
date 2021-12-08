#include <bits/stdc++.h>
using namespace std;

bool isArraySorted(int a[], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i - 1] > a[i]) {
            return false;
        }
    }
    return true;
}

bool isArraySortedRecursive(int a[], int size, int index) {
    if (size == 1 || index == size) {
        return true;
    }
    if (a[index] < a[index - 1]) {
        return false;
    }
    return isArraySortedRecursive(a, size, index + 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        // cout << isArraySorted(a, n) << endl;
        cout << isArraySortedRecursive(a, n, 0) << endl;
    }
    return 0;
}
