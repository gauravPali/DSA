#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int l, int r, int target) {
    if (l > r) return -1;
    int mid = (l + r) / 2;
    if (arr[mid] > target) {
        r = mid - 1;
    } else if (arr[mid] < target) {
        l = mid + 1;
    } else {
        if (mid == 0 || arr[mid] != arr[mid - 1]) {
            return mid;
        }
        r = mid - 1;
        // for last index
        // int n = 5;
        // if (mid == n || arr[mid] != arr[mid + 1]) {
        //     return mid;
        // }
        // l = mid + 1;
    }
    return solve(arr, l, r, target);
}

vector<int> solveIter(int arr[], int l, int r, int target, int size) {
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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int n, no;
        cin >> n >> no;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << solve(arr, 0, n, no) << "\n";
    }
}