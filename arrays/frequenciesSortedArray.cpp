#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                count++;
            } else {
                cout << a[i - 1] << " " << count << endl;
                count = 1;
            }
        }
        cout << a[n - 1] << " " << count << endl;
    }
    return 0;
}

// frequ for unsorted array ??