#include <bits/stdc++.h>
using namespace std;
int countOccur(int a[], int low, int high, int target) {
    cout<<"countOccur"<<"\n";
    if (high < low) return 0;
    int mid = (low + high) / 2;
    if (a[mid] == target) {
        return 1 + countOccur(a, low, mid - 1, target) + countOccur(a, mid + 1, high, target);
    } else if (a[mid] < target) {
        low = mid + 1;
    } else {
        high = mid - 1;
    }
    return countOccur(a, low, high, target);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, no;
        cin >> n >> no;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << countOccur(arr, 0, n - 1, no) << "\n";
    }
}