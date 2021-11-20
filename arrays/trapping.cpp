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
        // for (int i = 0; i < n; i++) {
        //     int leftBar = a[i], rightBar = -1, lessFromLeftBar = -1, r = -1;
        //     for (int j = i + 1; j < n; j++) {
        //         if (a[j] > leftBar) {
        //             rightBar = a[j];
        //             r = j;
        //         } else if (a[j] > lessFromLeftBar) {
        //             lessFromLeftBar = a[j];
        //             r = j;
        //         }
        //     }
        //     if (r != 1 + i) {
        //     }
        // }
        bool checkEven = a[0] % 2, checkOdd = (a[0] % 2 == 0);
        int ans = 1, count = 1;
        for (int i = 1; i < n; i++) {
            if (checkEven) {
                if (a[i] % 2 == 0) {
                    count++;
                    ans = max(ans, count);
                    checkOdd = true;
                    checkEven = false;
                } else {
                    count = 1;
                }
            } else {
                if (a[i] % 2) {
                    count++;
                    ans = max(ans, count);
                    checkOdd = false;
                    checkEven = true;
                } else {
                    count = 1;
                }
            }
        }
        cout << "from sol1 " << ans << endl;

        count = 1, ans = 1;                                                      
        for (int i = 1; i < n; i++) {
            if ((a[i] % 2 == 0 && a[i - 1] % 2) ||
                (a[i] % 2 && a[i - 1] % 2 == 0)) {
                count++;
                ans = max(ans, count);
            } else {
                count = 1;
            }
        }
        cout << "from sol2 " << ans << endl;
    }

    return 0;
}