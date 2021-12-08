#include <bits/stdc++.h>
using namespace std;
int countOnes(int a[], int l, int r, int count, int size) {
    if (l > r) return 0;
    int mid = (l + r) / 2;
    if (a[mid] == 1) {
        return size - mid - count + countOnes(a, l, mid - 1, size - mid, size);
    } else {
        return countOnes(a, mid + 1, r, count, size);
    }
}
int main() {
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << countOnes(a, 0, n - 1, 0, n) << "\n";
    }
}