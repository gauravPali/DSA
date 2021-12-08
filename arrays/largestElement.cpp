#include <bits/stdc++.h>
using namespace std;

int largestRecursive(int a[], int n, int currIndex) {
    // cout << "largestRecursive(a, n, " << currIndex << ")" << endl;
    if (n == 1 || currIndex == n - 1) {
        return a[currIndex];
    }
    return max(a[currIndex], largestRecursive(a, n, currIndex + 1));
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
        cout << largestRecursive(a, n, 0) << endl;
    }
    return 0;
}
