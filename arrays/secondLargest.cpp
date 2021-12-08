#include <bits/stdc++.h>
using namespace std;

int getSecondLargest() {
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
    return secondLargest;
}

int main() {
    cout << getSecondLargest();
    return 0;
}
