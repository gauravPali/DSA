#include <bits/stdc++.h>
using namespace std;

void headRecursion(int n) {
    if (n == 0) return;
    headRecursion(n - 1);
    // cout << n << endl;
}

void tailRecursion(int n, int k) {
    if (n == 0) return;
    // cout << k << endl;
    tailRecursion(n - 1, k + 1);
}

int main() {
    // HEAD vs TAIL RECURSION
    cout << "HEAD" << endl;
    auto start1 = chrono::system_clock::now();
    headRecursion(50000);
    auto end1 = chrono::system_clock::now();

    cout << chrono::duration_cast<chrono::milliseconds>(end1 - start1).count()
         << "ms" << endl;

    cout << "TAIL IS ALWAYS BETTER" << endl;
    auto start = chrono::system_clock::now();
    tailRecursion(50000, 1);
    auto end = chrono::system_clock::now();

    cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()
         << "ms" << endl;

    return 0;
}
