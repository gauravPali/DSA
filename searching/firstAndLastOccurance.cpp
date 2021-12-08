#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int arr[], int l, int r, int target, int size) {
    int first = -1, last = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == target) {
            if (first == -1) {
                if (mid == 0 || arr[mid - 1] != arr[mid]) {
                    first = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            } else if (last == -1) {
                if (mid == size - 1 || arr[mid + 1] != arr[mid]) {
                    last = mid;
                    break;
                } else {
                    l = mid + 1;
                }
            }
        } else if (arr[mid] > target) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    if (first != -1 && last == -1) {
        last = first;
    }
    vector<int> ans;
    ans.push_back(first);
    ans.push_back(last);
    return ans;
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
        vector<int> ans = solve(a, 0, n - 1, k, n);
    }
    return 0;
}
