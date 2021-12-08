#include <bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[], int n) {
    // way 1
    // int zerothIndex = -1;
    // for (int i = 0; i < n; i++) {
    //     if (arr[i]) {
    //         if (zerothIndex != -1) {
    //             arr[zerothIndex] = arr[i];
    //             arr[i] = 0;
    //             zerothIndex++;
    //         }
    //     } else if (zerothIndex == -1) {
    //         zerothIndex = i;
    //     }
    // }

    // way 2
    int nonZeroCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i]) {
            swap(arr[nonZeroCount], arr[i]);
            nonZeroCount++;
        }
    }
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
        pushZerosToEnd(a, n);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
