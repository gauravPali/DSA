#include <bits/stdc++.h>
using namespace std;

int* fun() {
    // you can not return an array from a function instead use dyncamic size or
    // static or struct int arr[100];

    // /* Some operations on arr[] */
    // arr[0] = 10;
    // arr[1] = 20;
    // return arr;
}

int largestRecursive(int a[], int n, int currIndex) {
    // cout << "largestRecursive(a, n, " << currIndex << ")" << endl;
    if (n == 1 || currIndex == n - 1) {
        return a[currIndex];
    }
    return max(a[currIndex], largestRecursive(a, n, currIndex + 1));
}

int getSecondLargest() {
    /*
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
    */

    /* int arr[] = {1, 3, 4, 5, 6};
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
        } else if (arr[i] < l1 && (arr[i] > l2 || l1 == l2)) {
            l2 = arr[i];
        }
    } */

    int arr[] = {1, 3, 4, 5, 6};
    int n = 5;
    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] != largest) {
            if (arr[i] > secondLargest || secondLargest != -1) {
                secondLargest = arr[i];
            }
        }
    }
}

bool isArraySorted() {
    int a[] = {1, 32, 3, 4, 5};
    int n = 5;
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

void pushZerosToEnd(int arr[], int n) {
    int zerothIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i]) {
            if (zerothIndex != -1) {
                arr[zerothIndex] = arr[i];
                arr[i] = 0;
                zerothIndex++;
            }
        } else if (zerothIndex == -1) {
            zerothIndex = i;
        }
    }

    int nonZeroCount = 0;
    for (int i = 0; i < n; i++) {
        if (!arr[i]) {
            swap(arr[nonZeroCount], arr[i]);
            nonZeroCount++;
        }
    }
}

void arrayRotationByD(int arr[], int n, int d) {
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

void reverseArray(int a[], int n, int index) {
    if (index >= n / 2) {
        return;
    }
    int temp = a[index];
    a[index] = a[n - 1 - index];
    a[n - 1 - index] = temp;
    reverseArray(a, n, index + 1);
}

void leftRotate(int arr[], int k, int n) {
    // cout << "drdf";
    if (k >= n) {
        k = k % n;
    }
    for (int i = 0; i < k / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[k - 1 - i];
        arr[k - 1 - i] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = k; i < k + (n - k) / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i + k];
        arr[n - 1 - i + k] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main() {
    // int arr[] = {1, 2, 4, 5};
    // cout << arr << endl;
    // cout << arr + 1 << endl;
    // cout << arr + 2 << endl;
    // cout << sizeof(arr[0]) << endl;

    // int arr2[5] = {};
    // // int *arr = new int[n];
    // for (int i = 0; i < 5; i++) {
    //     cout << arr2[i] << endl; // 0 ;
    // }
    // cout << endl;

    // int arr3[5] ={1,2,3,4,5};
    // arr3 = arr2; // invalid array assignment

    // vector<int> v(10);
    // cout << v.size() << endl;
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // getSecondLargest();
    // cout << isArraySorted();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        // cout << isArraySortedRecursive(a, n, 1) << endl;
        // cout << largestRecursive(a, n, 0) << endl;
        // pushZerosToEnd(a, n);
        leftRotate(a, k, n);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
