#include <bits/stdc++.h>
using namespace std;

int getSecondLargest() {
    int a[] = {15, 15};
    int l1 = a[0], l2 = l1;
    for (int i = 1; i < 2; i++) {
        if (a[i] > l1) {
            l2 = l1;
            l1 = a[i];
        } else if (a[i] < l1) {
            if (a[i] > l2) {
                l2 = a[i];
            } else if (l1 == l2) {
                l2 = a[i];
            }
        }
    }
    cout << l1 << " " << l2 << endl;

    int arr[] = {1, 3, 4, 5, 6};
    int n = 5;
    if (n < 2) {
        return -1;
    }
    int l1 = arr[0], l2 = arr[1];
    if (l1 < l2) {
        l1 = arr[1];
        l2 = arr[0];
    }
    for (int i = 2; i < n; i++) {
        if (arr[i] > l1) {
            l2 = l1;
            l1 = arr[i];
        } else if (arr[i] <  l1 && (arr[i] > l2 || l1 == l2)) {
            l2 = arr[i];
        }
    }
    
}

int main() {
    getSecondLargest();
    return 0;
}
