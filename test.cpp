#include <bits/stdc++.h>
using namespace std;

int getBuyIndex(vector<int>& prices, int l, int r) {
    int buyIndex = -1;
    for (int i = l; i < r; i++) {
        if (prices[i] < prices[i + 1]) return i;
    }
    return buyIndex;
}

int getSellIndex(vector<int>& prices, int l, int r) {
    int sellIndex = -1;
    for (int i = l; i < r; i++) {
        if (prices[i] > prices[i + 1]) {
            return i;
        }
    }
    return r;
}
int maxProfit(vector<int>& prices) {
    int buyIndex = -1, sellIndex = -1, n = prices.size();
    long long ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (buyIndex == -1) {
            if (prices[i] < prices[i + 1]) buyIndex = i;
        } else if (sellIndex == -1) {
            if (prices[i] > prices[i + 1]) {
                sellIndex = i;
                ans += prices[sellIndex] - prices[buyIndex];
                buyIndex = -1;
                sellIndex = -1;
            }
        }
        // cout << "i: " << i << " buy: " << buyIndex << " sell: " << sellIndex << "\n";
    }
    if (buyIndex != -1 && sellIndex == -1) {
        ans += prices[n - 1] - prices[buyIndex];
    }
    return ans;
}

int stockBuySell(vector<int> prices, int n) {
    int buyIndex = -1, sellIndex = -1;
    long long ans = 0;
    for (int i = 0; i < prices.size(); i++) {
        if (buyIndex == -1) {
            if (i != prices.size() - 1 && prices[i] < prices[i + 1]) {
                buyIndex = i;
            }
        } else {
            int j = i, maxx = prices[j];
            for (j = i; j < prices.size(); j++) {
                if (prices[j] < maxx) {
                    sellIndex = j - 1;
                    i = j - 1;
                    ans = ans + prices[sellIndex] - prices[buyIndex];
                    buyIndex = -1;
                    sellIndex = -1;
                    break;
                }
                maxx = prices[j];
                cout << "j is " << j << " ans is " << ans << endl;
            }
            if (j == prices.size()) {
                sellIndex = n - 1;
                ans = ans + prices[n - 1] - prices[buyIndex];
                i = n - 1;
            }
        }
        cout << "i is " << i << " ans is " << ans << endl;
    }
    if (buyIndex && sellIndex == -1) {
        ans -= prices[buyIndex];
    }
    return ans;

    // return ans;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // vector<int> prices(n);
        // for (int i = 0; i < n; i++) cin >> prices[i];
        // // cout << stockBuySell(prices, n);
        // cout << maxProfit(prices) << "\n";
    }
    return 0;
}