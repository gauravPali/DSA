#include <bits/stdc++.h>
using namespace std;


bool isLucky(int n) {
    static int itr = 2;
    if (n % itr == 0) {
        return false;
    }
    if (n < itr) {
        return true;
    }
    n = n - (n / itr);
    itr++;
    return isLucky(n);
}

bool isPalindrome(string s, int l, int r) {
    if (l > r) return true;
    if (s[l] == s[r]) return isPalindrome(s, l + 1, r - 1);
    return false;
}

int getMax(int a, int b, int c) {
    return max(a, max(b, c));
}

int ropeCut(int n, int noOfCuts, int a, int b, int c) {
    if (n == 0) return noOfCuts;
    if (n < 0) return -1;
    return getMax(ropeCut(n - a, noOfCuts + 1, a, b, c),
                  ropeCut(n - b, noOfCuts + 1, a, b, c),
                  ropeCut(n - c, noOfCuts + 1, a, b, c));
}

void subsets(string s, int l, string result) {
    if (l == s.size()) {
        cout << result << "\n";
        return;
    }
    subsets(s, l + 1, result);
    result.push_back(s[l]);
    subsets(s, l + 1, result);
}

/*
  23
        
        ABC DEF
        
        A  BC   D EF
        
        A BC    E EF
        
        A BC    F
        
        
        B C     D EF 
*/


int main() {
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        // PALINDROME
        // string s;
        // cin >> s;
        // cout << isPalindrome(s, 0, s.size() - 1) << "\n";

        // ROPE CUT
        // int n, a, b, c;
        // cin >> n >> a >> b >> c;
        // cout << ropeCut(n, 0, a, b, c) << "\n";

        // GENERATE SUBSETS
        // string s, res;
        // cin >> s;
        // cout << "Genrating Subsets of " << s << "\n";
        // subsets(s, 0, res);
        // cout << "Subsets Generated"
        //  << "\n\n";
    }
    return 0;
}
