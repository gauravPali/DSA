#include <bits/stdc++.h>
using namespace std;
// time complexity -> 3^N
int ans = -1;
void solve(int n, int a, int b, int c, int times) {
    if (n < 0) {
        return;
    } else if (n == 0) {
        ans = max(ans,times);
        return;
    }
    solve(n - a, a, b, c, times + 1);
    solve(n - b, a, b, c, times + 1);
    solve(n - c, a, b, c, times + 1);
}

int main() {
    int ropeLength, a, b, c;
    cin >> ropeLength >> a >> b >> c;
    solve(ropeLength, a, b, c, 0);
    cout << ans << endl;
    return 0;
}
